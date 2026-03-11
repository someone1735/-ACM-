class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int f[n+5],ff[n+5];
        if(n==0) return 0;
        f[0]=height[0];
        for(int i=1;i<=n-1;i++) f[i]=max(f[i-1],height[i]);
        ff[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--) ff[i]=max(ff[i+1],height[i]);

        int ans=0;
        for(int i=0;i<=n-1;i++) ans+=min(f[i]-height[i],ff[i]-height[i]);
        return ans;
    }
};