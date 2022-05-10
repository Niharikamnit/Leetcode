class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        bool dp[s.length()+1];
        memset(dp,false,sizeof(dp));
        dp[0]=true;
        
        for(int i=1;i<=s.length();i++) {
            for(int j=0;j<i;j++) {
                    if(dp[j]&&find(wordDict.begin(),wordDict.end(), s.substr(j,i-j))!=wordDict.end()){
                        dp[i]=true;
                        break;
                    }
                }
            }
        return dp[s.length()];
    }
};