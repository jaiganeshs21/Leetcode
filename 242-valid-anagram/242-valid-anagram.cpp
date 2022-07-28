class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return 0;
        if(s==t) return 1;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};
