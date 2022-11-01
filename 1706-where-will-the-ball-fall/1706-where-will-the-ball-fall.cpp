class Solution {
public:
int solve(vector<vector<int>>& mat,int r,int c)
    {   int n=mat[0].size();
        if(c+mat[r][c]<0 || c+mat[r][c]==n)return -1;
        if(mat[r][c]==1)
        {
            if(c+1==n || mat[r][c+1]==-1)return -1;
        }
        else{
            if(c-1<0 || mat[r][c-1]==1)return -1;
        }
        int m=mat.size();
        if(r==m-1)
            return mat[r][c]+c;
        return solve(mat,r+1,c+mat[r][c]);
    }
    vector<int> findBall(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> res;
        for(int i=0;i<n;i++)res.push_back(solve(mat,0,i));
        return res;
    }
};