class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(auto i:words)
            m[i]++;

        auto comp = [&](const pair<string,int>& a, const pair<string,int>& b) {
            return a.second < b.second || (a.second == b.second && a.first > b.first);
        };
        typedef priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(comp)> pq_t;
        pq_t pq(comp);
        
        for(auto i:m)
        {
           
                pq.push({i.first,i.second});
            // if(pq.size()>k)pq.pop();
            
        }
         vector<string> output;
        while(k--){
            output.push_back( pq.top().first);
            pq.pop();
        }
        return output;
        
    }
};