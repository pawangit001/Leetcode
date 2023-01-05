class Solution {
    private:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        return (a[1]<b[1]?1:0);
    }
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end(),cmp);
       // for(auto i:points)cout<<i[0]<<" "<<i[1]<<"-";
     
      
       int res=0;
        int segment=0;
        for(int i=0;i<points.size();i++)
        {
         
            if(res==0 or segment<points[i][0])
            {
                   
                    res++;
                segment=points[i][1];
            }
            
           
        }
        return res;
    }
    
};