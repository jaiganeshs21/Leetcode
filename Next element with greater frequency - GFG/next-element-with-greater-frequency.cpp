// { Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;


 // } Driver Code Ends
class Solution{
public:
vector<int> print_next_greater_freq(int arr[],int n)
    {
        unordered_map<int, int> fmap;
        for(int i = 0; i<n; i++){
            fmap[arr[i]]++;
        }
        vector<int>next_greater(n, -1);
        //vector<int>next_greater;
        stack<pair<int, int>>s;
        for(int i = n-1; i>=0; i--){
            while(s.size()>0 and s.top().second<=fmap[arr[i]]){
                    s.pop();
                }
            if(s.empty()){
                //next_greater.push_back(-1);
                next_greater[i]=-1;
            }else{
                //next_greater.push_back(s.top().first);
                next_greater[i]=s.top().first;
            }
            s.push({arr[i], fmap[arr[i]]});
        }
        //reverse(begin(next_greater), end(next_greater));
        return next_greater;
    }
};


// { Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
	return 1;
}
  // } Driver Code Ends