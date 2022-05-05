class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//         long long int H=0,x=0,y=0;
//         int arr[s.length()];
//         int count=0;
//         int k=0;
//         if(s.length()==0){
//             return 0;
//         }
//         else if(s.length()==1) {
//             return 1;
//         }
//         else {
//         for(int i=0;i<s.length();i++) {
            
//             for(int j=i;j<s.length();j++) {
//                 if(s[j]>=97 && s[j]<=122) {
//                      x=1;
//                      x=x<<(s[j]-97);

//                 }
//                 else if(s[j]>=32 && s[j]<=64) {
//                      x=1;
//                      x=x<<(s[j]-5);
//                 }
//                 else {
//                     y=1;
//                     y=y<<(s[j]-)
//                 }
//             if((x&H)>0) {
//                 arr[k]=count;
//                 k++;
//                 count=0;
//                 H=0;
//                 break;
//             }
//             H=x|H;
//             count++;
//         }
//         }
//           int max=arr[0];
//             for(int j=1;j<k;j++) {
//                 if(max<arr[j]) {
//                     max=arr[j];
//                 }
//             }
//             return max;
//         } 
        
        unordered_map<char,int> mp;
        int n=s.length();
        if(n==0) return 0;
        if(n==1) return 1;
        int i=0;
        int j=0;
        int currlen=0;
        int ans=0;
        while(j<n) {            
            if(mp.find(s[j])!=mp.end()) {
                i=max(i,mp[s[j]]+1);
            }
            mp[s[j]]=j;
            currlen=j-i+1;
            ans=max(ans,currlen);
            j++;
        }
        return ans;
        
    }
};