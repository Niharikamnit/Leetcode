class Solution {
public:
    //TWO POINTER METHOD with dp        
    string longestPalindrome(string s) {
	const int n = s.size();
	if(n==0) return "";
	int dp[n][n], maxlen =1 , left=0;// maxlen = 1 when only one letter
   // rows are start pointer and cols are end pointer.

	memset(dp,0,n*n*sizeof(int));
	for(int end=0;end<n;++end) {
		dp[end][end] = 1; // strings with same start and end-> one letter substring. they are                              always palindromes
		for(int start=0;start<end;++start){
			dp[start][end] = (s[start]==s[end]  && (end-start< 2 || dp[start+1][end-1])); //                                                  string of size 2, if both elements are equal
                                                // will be a palindrome start-end=1
                                                 // or if we find equal start and end
                                     // we have to check if the string within                          them(start+1,end-1) is also // a palindrome or not. if it is then 1 else 0           
			if(dp[start][end] && maxlen < end-start+1){
				left = start;
				maxlen = end-start+1;
			}
        }
    }
	return s.substr(left,maxlen);
}
        
};