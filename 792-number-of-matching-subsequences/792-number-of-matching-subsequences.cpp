class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,int>mp;
        
        for(auto x: words) ++mp[x];

        int ans=0;
        int n=words.size();
        for(auto x: mp){
            string t=x.first;
            int j=0,k=0;
            //int start1=0,start2=0;
            
            while(j<t.size() && k<s.size()){
                if(s[k]==t[j]){
                    ++k;
                    ++j;
                }
                else ++k;
            }
            
            if(j==t.size()) ans+=x.second;
        }    
        return ans;
    }
};