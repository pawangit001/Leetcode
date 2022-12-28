class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq(piles.begin(),piles.end());
        while(k--)
        {
            int remove=pq.top();
            
            
            remove=remove/2;
            remove=pq.top()-remove;
            pq.pop();
            cout<<remove;
            pq.push(remove);
            
        }
        long long int ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
            
        }
        return ans;
    }
};