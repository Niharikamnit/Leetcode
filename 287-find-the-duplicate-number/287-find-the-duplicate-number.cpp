class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int k=nums[0];
        
        for(int i=0;i<n;i++) {
            if (nums[abs(nums[i]) - 1] > 0)
            nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
           else
            k=abs(nums[i]);
        }
        return k;
    }
};