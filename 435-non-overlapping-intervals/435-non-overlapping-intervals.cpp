class Solution {
public:
    bool static comp(vector<int> &a, vector<int> &b) {
        if(a[1]==b[1]) return a[0]<b[0];
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //sort wrt end points
        sort(intervals.begin(),intervals.end(),comp);
        vector<int> prev = intervals[0];
        int ans=0;
        for(int i=1;i<intervals.size();i++) {
            if(intervals[i][0]<prev[1]) ans++;
            else prev = intervals[i];
        }
        return ans;
    }
};