class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         int post[n+1];
//         post[n-1]=1;
//         vector<int> ans;
//         for(int i=n-2;i>=0;i--) {
//             post[i]=post[i+1]*nums[i+1];
//         }
        
//         int pre[n];
//         pre[0]=1;
//         for(int i=0;i<n;i++) {
//             if(i>0) pre[i]=pre[i-1]*nums[i-1];
//             ans.push_back(pre[i]*post[i]);
            
//         }
//         return ans;
        
        int n=nums.size();
        vector<int> ans(n,1);
        ans[0]=1;
        for(int i=1;i<n;i++) {
            ans[i]=ans[i-1]*nums[i-1];
            
        }
        int post=1;
        for(int i=n-2;i>=0;i--) {
            post=post*nums[i+1];
            ans[i]=ans[i]*post;
        }
        return ans;
        
    }
};