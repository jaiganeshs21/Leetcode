class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        
        vector<int>ans;
        int n=nums2.size();
        for(int i=0;i<nums1.size();++i){
            bool ok=0,flag=0;
            for(int j=0;j<n;++j){
                if(nums1[i]==nums2[j]) ok=1;
                if(ok){
                    if(nums2[j]>nums1[i]){
                        ans.push_back(nums2[j]); 
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0) ans.push_back(-1);
        }
        return ans;
    }
};