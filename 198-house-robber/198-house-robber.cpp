class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int dp[n+1];
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=2;i<=n;i++) {
            // for(int j=0;j<i;j++) {
                dp[i]=max(dp[i-2]+nums[i-1],dp[i-1]);
            // }
        }
        return dp[n];
    }
};