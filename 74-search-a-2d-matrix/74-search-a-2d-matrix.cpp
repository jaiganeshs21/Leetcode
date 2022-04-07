class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int left=0,right=n*m-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(matrix[mid/m][mid%m]==target) return 1;
            else if(matrix[mid/m][mid%m]>target) right=mid-1;
            else left=mid+1;
        }
        return 0;
    }
};