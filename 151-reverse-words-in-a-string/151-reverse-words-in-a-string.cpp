class Solution {
public:
    string reverseWords(string s) {
        
        stringstream str(s);
        string word;
        vector<string>vec;
        while(str>> word){
            vec.push_back(word);
        }
        

        reverse(vec.begin(),vec.end());
        
        string ans;
        for(auto x: vec){
            ans+=" "+x;
        }
        ans.erase(0,1);
        return ans;
    }
};