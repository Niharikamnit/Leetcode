class Solution {
public:
//     void swap(int& a, int& b) {
//         int t=a;
//         a=b;
//         b=t;
//     }
 void nextPermutation(vector<int> &nums)
{
     int n=nums.size();
     int mini=-1;
     int k=n-1;
     
     
     for(int i=n-1;i>=1;i--) {
         if(nums[i]>nums[i-1]) {
             mini=nums[i-1];
             k=i-1;
             break;
         }
     }
     if(mini==-1) {
         sort(nums.begin(),nums.end());
     }
     else {
         //we have to swap out the first smallest number, with 
         //the first number bigger than it from the end
         //the elements to the right of 'k+1' are all smaller than it,
         //so the first biggest number out of them(bigger that nums[k] will be swapped)
         for(int i=n-1;i>=0;i--){
             if(nums[i]>nums[k]){
                 swap(nums[i],nums[k]);
                 sort(nums.begin()+k+1,nums.end());
                 break;
             }
         }
     }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
//     // initialize variable:
//     int breakPoint = -1;

//     // find a breakpoint:
//     for (int i = nums.size() - 1; i > 0; i--)
//     {
//         if (nums[i] > nums[i - 1])
//         {
//             breakPoint = i - 1;
//             break;
//         }
//     }

//     // if no breakpoint
//     if (breakPoint < 0)
//     {
//         reverse(nums.begin(), nums.end());
//         return;
//     }

//     // if found a breakpoint
//     for (int i = nums.size() - 1; i >= 0; i--)
//     {
//         if (nums[i] > nums[breakPoint])
//         {
//             swap(nums[breakPoint], nums[i]);
//             reverse(nums.begin() + breakPoint + 1, nums.end());
//             break;
//         }
//     }
}
};