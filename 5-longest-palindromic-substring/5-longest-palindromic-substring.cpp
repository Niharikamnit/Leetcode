class Solution {
public:
    //TWO POINTER METHOD AND BRUTE FORCE
    string longestPalindrome(string s) {
        // string str;
        // str=s;
        // reverse(str.begin(), str.end());
        // std::string ans;
        // int k=0;
        // for(int i=0;i<s.length();i++) {
        //     for(int j=0;j<str.length();j++) {
        //         if(s[i]==str[j]) {
        //             ans.push_back(s[i]);
        //             k++;
        //         }
        //         if(k>1 && s[i]!=str[j]) {
        //             k=0;
        //             ans.clear();
        //             break;
        //         }
        //     }
        // }
        // return ans;
        
//         int n=s.length();
//         int dp[n][n]; // rows are start pointer and cols are end pointer.
        
//         for(int i=0;i<n;i++)
//             dp[i][i]=1; // cuz string of length 1 is alway a palindrome.
//                         // start==end string of length 1
        
//         for(int i=0;i<n-1;i++) { // string of size 2, if both elements are equal
//             if(s[i]==s[i+1]) {  // will be a palindrome
//                 dp[i][i+1]=1;   // start-end=1
//             }
//             else dp[i][i+1]=0;
//         }
//         int maxLen=1;
//         int beginIdx=0;
//         for(int k=3;k<n;k++) { // considering strings from length 3
//             for(int start=0;start<=n-k;start++) { //last two rows are filled, so until n-3
//                 int end=start+k-1; // we are only filling upper triangle
                
//                 if(s[start]==s[end] && dp[start+1][end-1]){ //if we find equal start and end
//                     dp[start][end]=1;  // we have to check if the string within them is also
//                                      // a palindrome or not
                    
//                     if(maxLen<end-start+1) {
//                     maxLen=end-start+1;
//                     beginIdx=start;
//                     }
//                 }
//             }       
//         }
        
//         return s.substr(beginIdx,beginmaxLen-1);
//     }
        
        // string longestPalindrome(string s) {
	const int n = s.size();
	if(n==0) return "";
	int dp[n][n], maxlen =1 , left=0;// maxlen = 1 when only one letter
	memset(dp,0,n*n*sizeof(int));
	for(int end=0;end<n;++end) {
		dp[end][end] = 1;
		for(int start=0;start<end;++start){
			dp[start][end] = (s[start]==s[end]  && (end-start< 2 || dp[start+1][end-1]));
			if(dp[start][end] && maxlen < end-start+1){
				left = start;
				maxlen = end-start+1;
			}
		}
	}
	return s.substr(left,maxlen);
}
        
};