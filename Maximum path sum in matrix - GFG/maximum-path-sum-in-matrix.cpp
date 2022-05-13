// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int n, vector<vector<int>> M)
    {
        // code here
	int m = n;
	if(n==1) return M[0][0];
	if(n<1) return 0;
	int maxPathSum = INT_MIN;
	for (int i = 1; i < n; i++) {
		maxPathSum = INT_MIN;
		for (int j = 0; j < m; j++) {
			if(j > 0 && j < m - 1) {
				M[i][j] += max({M[i - 1][j], M[i - 1][j - 1], M[i - 1][j + 1]});
			}
			else if(j > 0) {
				M[i][j] += max(M[i - 1][j], M[i - 1][j - 1]);
			}
			else if(j < m - 1) {
				M[i][j] += max(M[i - 1][j], M[i - 1][j + 1]);
			}
			maxPathSum = max(maxPathSum, M[i][j]);
		}
	}
	return maxPathSum;
}
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends