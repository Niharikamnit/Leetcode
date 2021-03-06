class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        //fixing one element and then binary search for two elements with sum= -(fixed ele)
        //look out fo multiple occurences. while loop thru them
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,r=n-1;
        int sum=0;
        vector<vector<int>> ans;
        vector<int> v;
        int target=0;
        for(int i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1])
                continue;
            else{
                //imp
            l=i+1, r=n-1;
            while(l<r) {
                sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    ans.push_back(v);
                    v.clear();
                     //couldnt code this line
                    l++;
                    while(l<r&&nums[l]==nums[l-1]) l++;
                }
                else if(sum>0) r--;
                else l++;
            }
            }
        }
        return ans;
    }
};