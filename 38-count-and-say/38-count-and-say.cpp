class Solution {
public:
    
    string countAndSay(int n) {
        string s;
        s="1";
        int k=n-1;
        while(k) {
            string temp="";
            
            for(int i=0;i<s.length();i++) {
                
                int cnt=1;
                //counting frequency
                while(i+1<s.length()&&s[i]==s[i+1]) {
                    cnt++;
                    i++;
                }
                
                temp+=to_string(cnt)+s[i];
            }
            s=temp;
            k--;
        }
        return s;
    }
};