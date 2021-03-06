class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();
        int l=0, h=n-1;
        int mid=0;
        while(l<=h) {
            if(l==h) return nums[l];
            mid= l+ (h-l)/2;
            
            if(nums[h]<nums[mid]) l=mid+1;
            else if(nums[l]>nums[mid]) h=mid;
            else if(nums[l]<=nums[mid]&&nums[h]>=nums[mid]) h=mid;
        }
        return nums[mid];
//         int res=nums[0];
//         int l=0,r=n-1;
//         int mid=0;
//         while(l<=r){
//             if(nums[l]<nums[r]) {
//                 res= min(res,nums[l]);
//                 break;
//             }
            
//             mid= (l+r)/2;
//             res=min(res,nums[mid]);
//             if(nums[mid]>=nums[l]) l=mid+1;
//             else r=mid-1;
//         }
//         return res;
    }
};