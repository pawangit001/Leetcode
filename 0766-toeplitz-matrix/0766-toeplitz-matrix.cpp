class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int r=0,c=0;
        while(c<matrix[0].size())
        {
            int i=0;
            int j=c;
            while(i<matrix.size()-1 and j<matrix[0].size()-1)
            {
                if(matrix[i][j]!=matrix[i+1][j+1])return false;
                j++;
                i++;
            }
           
            c++;
        }
      //  return true;
        r=1;
         while(r<matrix.size())
        {
            int i=r;
            int j=0;
            while(i<matrix.size()-1 and j<matrix[0].size()-1)
            {
                if(matrix[i][j]!=matrix[i+1][j+1])return false;
                j++;
                i++;
            }
            r++;
           
        }
        return true;
    }
};