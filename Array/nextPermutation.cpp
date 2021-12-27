class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return;
        int i=1;
        int last=-1;
        while(i<n){
            if(nums[i]>nums[i-1])
                last=i;
            i+=1;
        }
        if(last==-1){
            for(i=0;i<n/2;++i)
                swap(nums[i],nums[n-i-1]);
            return;
        }
        int m=nums[last];
        int index=last;
        for(i=last;i<n;++i)
        {
            if(nums[i]>nums[last-1] and nums[i]<nums[index]){
                index=i;
            }
        }
        swap(nums[last-1],nums[index]);
        sort(nums.begin()+last,nums.end());
    }
};