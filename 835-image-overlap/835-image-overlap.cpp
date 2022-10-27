class Solution {
public:
    vector<pair<int,int>> a,b;
    map<pair<int,int>,int> mp;
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2,int res = 0) {
        for(int i = 0;i<img1.size();i++)
            for(int j = 0;j<img1[0].size();j++)
                if(img1[i][j] == 1)a.push_back({i,j});
                
        for(int i =0;i<img2.size();i++)
             for(int j = 0;j<img2[0].size();j++)
                 if(img2[i][j] == 1)b.push_back({i,j});
        
        for(auto ele1:a)
            for(auto ele2:b)
              mp[{ele1.first - ele2.first,ele1.second - ele2.second}]++,
              res = max(res,mp[{ele1.first-ele2.first,ele1.second-ele2.second}]);
        return res;
    }
};