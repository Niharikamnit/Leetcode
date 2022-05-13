class Solution {
public:
    bool isPossible(int i, int j, int m, int n) {
        if(i<0||j<0||i>=m||j>=n) return false;
        return true;
    }
    int solver(int i, int j, int m, int n) {
        if(i==m-1&&j==n-1) return 1;
        if(isPossible(i,j,m,n)) {
            return uniquePaths(m-1,n)+uniquePaths(m,n-1);
        }
        return 0;
    }
    int uniquePaths(int m, int n) {
        // return solver(0,0,m,n);
        vector<vector<int>> dp(m, vector<int>(n, 1));
        
        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};