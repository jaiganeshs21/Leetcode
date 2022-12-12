class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int pre2=1,pre1=1;
        int cur=0;
        for(int i=2;i<=n;++i){
            cur=pre2+pre1;
            pre2=pre1;
            pre1=cur;
        }
        return cur;
    }
};