class Solution {
    private:
  static  bool mycamp(vector<int>a,vector<int>b)
    {
       if(a[0]<b[0])return true;
        else if(a[0]==b[0])return a[1]<b[1]?1:0;
        else
            return false;
    }
    
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),mycamp);
        vector<vector<int>>ans;
        pair<int,int>p;
        p.first=intervals[0][0];
        p.second=intervals[0][1];
        int f=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(p.second>=intervals[i][0])
            {
               // if(i==intervals.size()-1)f=1;
                p.second=max(p.second,intervals[i][1]);
                
            }
            else
            {
                
                ans.push_back({p.first,p.second});
                p.first=intervals[i][0];
                p.second=intervals[i][1];
            }
        }
      ans.push_back({p.first,p.second});
        return ans;
    }
};