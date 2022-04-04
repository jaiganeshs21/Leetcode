class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi=INT_MAX;
        int ans=0;
        for(auto x: prices){
            if(x<mi) mi=x;
            ans=max(ans,x-mi);
        }
        return ans;
    }
};