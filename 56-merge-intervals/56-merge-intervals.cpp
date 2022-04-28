
class Solution {
public:
//     static bool comparator( vector<int>& a, vector<int>& b )
//     {
//         return a[0] < b[0];
//     }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         vector<vector<int>> res;
//         //Handle Edge cases
//         if( intervals.empty() )
//         {
//             return res;
//         }
        
//         if( intervals.size() == 1 )
//         {
//             res.push_back( intervals[0]);
//             return res;
//         }
        
//         //Sort the inetrvals first based on the start of interval
//         sort( intervals.begin(), intervals.end(), comparator );
        
//         //Push the first interval into the result
//         res.push_back( intervals[0] );
//         int i = 1;
//         while( i < intervals.size() )
//         {
//             vector<int>& last = res.back();
//             //Check for overlapping boundaries in the intervals and merge them suitably
//             if( last[1] < intervals[i][0] )
//             {
//                 res.push_back( intervals[i] );
//             }
//             else
//             {
//                 last[1] = max( last[1], intervals[i][1] );
//             }
//             i++;
//         }
        
//         return res;
        // sort(intervals.begin(),intervals.end());
        // vector<vector<int>> res;
        // int i=1;
        // int last=intervals[0][1];
        // int indx=0;
        // while(i<intervals.size()) {
        //     if(intervals[i-1][1]>=intervals[i][0]) {
        //         last=max(last,intervals[i][1]);
        //     }
        //     else {
        //         res.push_back({intervals[indx][0],last});
        //         indx=i;
        //         last=intervals[i][1];
        //     }
        //     i++;
        // }
        // res.push_back({intervals[indx][0],last});
        // return res;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans = {intervals[0]};
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>ans.back()[1]) // intervals can't be merged
                ans.push_back(intervals[i]);
            else
                ans.back()[1] = max(ans.back()[1],intervals[i][1]); // intervals can be merged
        }
        return ans;
        
    }
    
};