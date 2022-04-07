class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        
        int right=-1,left=-1;
        bool ok=0;
        for(int i=0;i<n;++i){
            if(nums[i]==target){
                if(!ok){
                    left=i;
                    ok=1;
                }
                right=i;
            }
        } 
        return {left,right};
    }
};