// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void print_all(int sum,int ind,vector<int>&arr, int n, vector<int> &subsetsum){
        if(ind==n){
            subsetsum.push_back(sum);
            return ;
        }
        
        //pick
        print_all(sum+arr[ind],ind+1,arr,n,subsetsum);
        
        //do not pick
        print_all(sum,ind+1,arr,n,subsetsum);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        vector<int>subsetsum;
        print_all(0,0,arr,n,subsetsum);
        sort(subsetsum.begin(),subsetsum.end());
        return subsetsum;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends