class Solution {
public:
    long long minimumAverageDifference(vector<int>& nums) {
        long long n=nums.size();
        
        long long sum=0;
        for(long long i=0;i<n;++i){
            sum+=nums[i];
        }
        
        
        vector<long long>temp;
        
        
        long long first=0;
        long long second=0;
        for(int i=0;i<n-1;++i){
            first+=nums[i];
            second=sum-first;
           // cout<<first/(i+1)<<" "<<second/(n-i-1)<<'\n';
            temp.push_back(abs((first/(i+1))-(second/(n-i-1))));        
        }
        temp.push_back(sum/n);
        
        for(auto x: temp) cout<<x<<" ";
        long long mi=INT_MAX;
        long long ans=-1;
        for(long long i=0;i<n;++i){
            if(temp[i]<mi){
                mi=temp[i];
                ans=i;
            }
        }
        return ans;
    }
};