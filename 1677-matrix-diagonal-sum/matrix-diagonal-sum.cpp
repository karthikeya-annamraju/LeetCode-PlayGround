class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        if (n == 1) return mat[0][0];
        int lsum = 0;
        int rsum = 0;
        for (int i = 0; i < n; i++) {
            lsum += mat[i][i];
        }
        for (int i = 0; i < n; i++) {
            rsum += mat[i][n-1-i];
        }
        int mid = n/2;
        if (n%2 == 0) return lsum+rsum;
        else return lsum+rsum-mat[mid][mid];   
    }
};