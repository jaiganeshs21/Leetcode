class Solution {
public:
    int binsearch(vector<int>nums,int target,bool leftbias){
        int n=nums.size();
        int left=0,right=n-1;
        
        int ans=-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]>target) right=mid-1;
            else if(nums[mid]<target) left=mid+1;
            else{
                ans=mid;
                if(leftbias) right=mid-1;
                else left=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=binsearch(nums,target,true);
        int right=binsearch(nums,target,false);
        return {left,right};
    }
};