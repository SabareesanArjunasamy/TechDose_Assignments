class Solution(object):
    def threeSum(self, nums):
        len_n = len(nums)
        ind_li = [i for i in range(len_n)]
        c = Counter(nums)
        sort_n = sorted(list(set(nums)))
        set_n = set(nums)
        len_s = len(sort_n)
        #print(sort_n)
        ans_li = []
        for i in range(len_s):
            if sort_n[len_s-1]==0:
                if c[0]>=3:
                    ans_li.append([0,0,0])
                break
            if sort_n[i]>=0:
                if c[0]>=3:
                    ans_li.append([0,0,0])
                break
            if c[sort_n[i]]>=2:
                if -sort_n[i]*2 in set_n and sort_n[i]<-sort_n[i]*2:
                    ans_li.append([sort_n[i],sort_n[i],-sort_n[i]*2])
            
            for j in range(i+1,len_s):
                if c[sort_n[j]]>=2:
                    if sort_n[i]+2*sort_n[j]==0:
                        ans_li.append([sort_n[i],sort_n[j],sort_n[j]])
                # every number only take once
                if -sort_n[i]-sort_n[j] in set_n and sort_n[j]<-sort_n[i]-sort_n[j]:
                    ans_li.append([sort_n[i],sort_n[j],-sort_n[i]-sort_n[j]])
        return ans_li