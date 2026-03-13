class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int a[10000+5];
        for(int i=0;i<=n-1;i++)
        {
            a[abs(nums[i])]++;
        }
        vector<int> ans;
        for(int i=0;i<=10000;i++)
        {
            if(a[i]!=0) for(int j=1;j<=a[i];j++) ans.push_back(i*i);
        }
        return ans;
        ans.clear();
    }
};