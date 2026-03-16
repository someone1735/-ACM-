class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),ans=-99999999,ff[100000+5];
        for(int i=0;i<=n;i++) ff[i]=0;
        ff[0]=nums[0];
        for(int i=1;i<=n-1;i++) ff[i]=max(ff[i-1]+nums[i],nums[i]);
        for(int i=0;i<=n-1;i++) ans=max(ans,ff[i]);
        return ans;
    }
};