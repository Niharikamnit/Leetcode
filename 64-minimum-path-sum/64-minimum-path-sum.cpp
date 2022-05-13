class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int dp[m][n];
        memset(dp,0,sizeof(dp));
        dp[0][0]=grid[0][0];
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) {
                if(i&&j)
                grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
                
                else if(j)
                    grid[i][j]+=grid[i][j-1];
                else if(i)
                    grid[i][j]+=grid[i-1][j];
                
            }
        }
        return grid[m-1][n-1];
        // for(int i=m-1;i>=0;i--){
        //     for(int j=n-1;j>=0;j--) {
        //         grid
        //     }
        // }
    }
};