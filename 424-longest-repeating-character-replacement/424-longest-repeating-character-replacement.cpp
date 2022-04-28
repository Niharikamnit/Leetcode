class Solution {
public:
    int characterReplacement(string s, int k) {
        //sliding window. shrink the window everytime window_size-maxfreqcharfreq>k
        
        int n=s.length();
        int ans=-1;
        unordered_map<char,int> mp;
        int maxfreq=0;
        int j=0;
        int i=0;
        while(j<n) {
            mp[s[j]]++;
            maxfreq=max(maxfreq,mp[s[j]]);
            
            int currlen=j-i+1; //window length;
            if(currlen-maxfreq>k) {
                mp[s[i]]--; //remove the first window element from window
                i++;
                currlen=j-i+1;
            }
            ans=max(ans,currlen);
            j++;
        }
        return ans;
    }
};