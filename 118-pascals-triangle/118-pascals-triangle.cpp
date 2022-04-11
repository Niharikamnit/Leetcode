class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++) {
            vector<int> v(i+1,1);
            for(int k=1;k<i;k++){
                v[k]=ans[i-1][k]+ans[i-1][k-1];
            }
            ans.push_back(v);
        }
        return ans;
    }
};