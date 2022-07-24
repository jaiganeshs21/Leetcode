class Solution {
public:
    long long cnt(long long N){
        return __builtin_popcountll(N);
    }
    
    
    long long countExcellentPairs(vector<int>& nums, int k) {
        int n=nums.size();
        
        
        unordered_set<int>st;
        for(auto x: nums) st.insert(x);
        
        
        vector<long long>temp;
        for(auto x: st){
            temp.push_back(cnt(x));
        }
        
        sort(temp.begin(),temp.end());
        
        
        long long ans=0;
        for(int i=0;i<temp.size();++i){
           auto x=lower_bound(temp.begin(),temp.end(),k-temp[i]);
            ans+=(temp.end()-x);
        }
        return ans;
    }
};