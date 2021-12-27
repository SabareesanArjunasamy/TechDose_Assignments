def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        llist=nums1+nums2
        l=len(llist)
        for i in range(0,l):
            for j in range(i+1,l):
                if llist[i]<llist[j]:
                    llist[i],llist[j]=llist[j],llist[i]
        return (llist[l//2]+llist[(l//2)-1]) / 2  if l%2==0 else llist[l//2]
            