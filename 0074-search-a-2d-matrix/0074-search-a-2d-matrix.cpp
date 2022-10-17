class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int c=matrix[0].size()-1;
        int r=matrix.size()-1;
        int i=0;
        while(i<=r&&c>=0)
        {
            if(matrix[i][c]==target)return true;
            if(matrix[i][c]>target)c--;
            else
                i++;
        }
        return false;
    }
};