class Solution {
public:
    
//     int combi(vector<int>& nums,int n,int target) {
//         if(target<0) return 0;
        
//         if(target==0) {
//             return 1;
//         }
//         int res=0;
//         for(int k=0;k<n;k++) {
//             res+=combi(nums,n,target-nums[k]);
//         }
//         return res;
//     }
    int combinationSum4(vector<int>& nums, int target) {
        int n= nums.size();
        // int ans =combi(nums,n,target);
        // return ans;
        
        //similar to coin change
        
        unsigned int dp[target+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        int mod=1000000007;
        for(int i=1;i<=target;i++){
             for(int j=0;j<n;j++){
                 if(i>=nums[j])
                dp[i]=(dp[i] + dp[i-nums[j]] );
            }
        }
        return dp[target];
    }
    
};