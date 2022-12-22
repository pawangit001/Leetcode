class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int r=matrix.size();
        int c=matrix[0].size();
        bool iscol=false;
        for(int i=0;i<r;i++)
        {
            //for first row and column we have to handle manually means
            // check if first row and column are zero
            if(matrix[i][0]==0)
                iscol=true;
            for(int j=1;j<c;j++)
            {
                if(matrix[i][j]==0)
                { // marking first element of row and column 
                  
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
           
            
        }
         //check once more time matrix for if
            // if the first row and column element are zero the also 
            // also element should be zero
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(matrix[i][0]==0 or matrix[0][j]==0)
                    matrix[i][j]=0;
            }
        }
        // if matrix[0][0]==0 then 
        if(matrix[0][0]==0)
            for(int j=0;j<c;j++)matrix[0][j]=0;
        // if iscol true then 
        if(iscol)
            for(int i=0;i<r;i++)
                matrix[i][0]=0;
        return;
    }
};