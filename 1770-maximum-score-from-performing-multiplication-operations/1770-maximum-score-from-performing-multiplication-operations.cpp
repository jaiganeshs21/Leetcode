class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n  = nums.size();
        int m = multipliers.size();
        vector<long> dp(m+1, 0), tmp(m+1,0);   
        for(int i=0; i<m; i++){
            // two ends
            tmp[0] = dp[0] + multipliers[i]*nums[n-1-i];
            tmp[i+1] = dp[i] + multipliers[i]*nums[i];
            // midle parts
            for(int j=1; j<i+1; j++){
                tmp[j] = max(dp[j-1] + multipliers[i]*nums[j-1], 
                             dp[j] + multipliers[i]*nums[n - 1 + j -i]);
            }
            swap(dp, tmp);
        }
        return *max_element(dp.begin(), dp.end());
    }
};