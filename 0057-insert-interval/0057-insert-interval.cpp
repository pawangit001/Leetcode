class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
         vector<vector<int>>p;
        int i=0,n=intervals.size();
        while(i<n&& intervals[i][1]<newInterval[0])
        {
          p.push_back(intervals[i]);
          i++;}
        while(i<n&& intervals[i][0]<=newInterval[1])
        {
          newInterval[0]=min(intervals[i][0],newInterval[0]);
            newInterval[1]=max(intervals[i][1],newInterval[1]);
            i++;
        }
        p.push_back(newInterval);
        while(i<n&& intervals[i][0]>newInterval[1])
        {
                 
           p.push_back(intervals[i]);i++;
        }
        return p;
    }
};