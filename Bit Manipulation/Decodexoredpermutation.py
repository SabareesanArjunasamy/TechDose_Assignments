class Solution:
    def decode(self, encoded: List[int]) -> List[int]:
        n = len(encoded); s = 0
        for i in range(1, n, 2):
            s ^= encoded[i]     
        for i in range(1, n+2):
            s ^= i
        ret = [s] + [0]*n
        for i in range(n):
            ret[i+1] = ret[i] ^ encoded[i]
        return ret