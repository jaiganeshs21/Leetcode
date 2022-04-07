class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        
        //due to edge case -2147483648 take data type as long
        long long nn=n;
        if(nn<0) nn*=-1;
        while(nn>0){
            if(nn&1){
               ans*=x;
                --nn;
            }
            else{
                x*=x;
                nn/=2;
            }
        }
        
        if(n<0) return 1/ans;
        return ans;
    }
};