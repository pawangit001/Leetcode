class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>m;
        for(auto i:tasks)m[i]++;
        int ans=0;
        for(auto i:m)
        {
            int cnt=i.second;
            if(cnt<2)return -1;
            if(cnt%3==0)ans+=cnt/3;
            else if( cnt>3 and (cnt%3)%2==0)
            {
                ans+=cnt/3;
                //cnt=cnt%3;
                ans+=1;
                
            }
              else if(cnt>3 and (cnt%3)%2==1)
            {
                ans+=cnt/3;
               // cnt=cnt%3;
                ans+=1;
            }
         else if(cnt%2==0)
             ans+=cnt/2;
          
            
                
        }
        return ans;
    }
};