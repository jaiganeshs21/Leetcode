class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans(m+n);
        int k=0;
        for(int i=0;i<m;++i) ans[k++]=nums1[i];
    
        for(int i=0;i<n;++i) ans[k++]=nums2[i];
        
        sort(ans.begin(),ans.end());
        
        for(int i=0;i<n+m;++i){
            nums1[i]=ans[i];
        }
    }
};