class Solution {
public:
    string countAndSay(int n) {
        
        string s="1";
        while(--n){
            string temp="";
            for(int i=0;i<s.size();++i){
                int cnt=1;
                while(i+1<s.size() && s[i]==s[i+1]){
                    ++cnt;
                    ++i;
                }
                temp+=to_string(cnt)+s[i];    
            }
            s=temp;
        }
        return s;
    }
};