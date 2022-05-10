class Solution {
public:
    int robbing(vector<int>& nums, int l, int r) {
        int pre=0,curr=0;
        for(int i=l;i<=r;i++) {
            int temp=max(pre+nums[i],curr);
            pre=curr;
            curr=temp;
        }
        return curr;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            if(n) return nums[0];
            else return 0;
        }
        return max(robbing(nums,0,n-2), robbing(nums,1,n-1));
    }
};