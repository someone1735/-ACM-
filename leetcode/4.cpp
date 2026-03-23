class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n=nums1.size(),m=nums2.size();
        if(m<n) return findMedianSortedArrays(nums2, nums1);
        int LMax1, LMax2, RMin1, RMin2, mid, nn, l = 0, r = 2 * n;
        while (l<=r)
		{
			mid = (l + r) / 2;
			nn = m + n - mid;

			LMax1 = (mid == 0) ? 999999 : nums1[(mid - 1) / 2];
			RMin1 = (mid == 2 * n) ? 9999999 : nums1[mid / 2];
			LMax2 = (nn == 0) ? 9999999 : nums2[(nn - 1) / 2];
			RMin2 = (nn == 2 * m) ? 9999999 : nums2[nn / 2];

			if (LMax1 > RMin2)
				r = mid - 1;
			else if (LMax2 > RMin1)
                    l = mid + 1;
			     else
				    break;
		}
		return (max(LMax1, LMax2) + min(RMin1, RMin2)) / 2.0;
    }
};