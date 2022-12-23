class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i=0,j=0;
        while(j<matrix[0].size())
        {
            int r=i,c=j;
            while(r<matrix.size())
            {
                swap(matrix[r][c],matrix[c][r]);
                r++;
            }
            j++,i++;
        }
        
        i=0;
        while(i<matrix.size())
        {int l=0,h=matrix[0].size()-1;
            while(l<h)
            {
                swap(matrix[i][l],matrix[i][h]);
                l++,h--;
            }
         i++;
        }
    }
};