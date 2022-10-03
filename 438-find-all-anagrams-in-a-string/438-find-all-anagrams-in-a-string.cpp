class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
      int len=s.size();
        int wind=p.size();
        if(wind>len)return {};
        vector<int>ans;
        vector<int>h(26,0);
        vector<int>ph(26,0);
        int i=0,j=0;
        while(j<wind)
        {
            h[s[j]-'a']++;
            ph[p[j]-'a']++;
            j++;
        }
        j--;
        while(j<len)
        {
            if(ph==h)
            {
                ans.push_back(i);
                
            }
            j++;
            if(j!=len)
            {
                h[s[j]-'a']++;
            }
            h[s[i]-'a']--;
            i++;
        }
        
        return ans;
        
        
        
        
        
        
        
        
//         int i=0,j=0;
//         int n=s.size();
//         int ana=p.size();
        
//         vector<int>ans;
//         if(ana>n)return ans;
//         sort(p.begin(),p.end());
//         while(i<n and j<n)
//         {
//             string t="";
//             //j=0;
//             j=i;
//             while(t.size()<ana and j<n)
//             {
//                 t+=s[j];j++;
                
//             }
//             sort(t.begin(),t.end());
//             if(t==p)
//             {
//                 ans.push_back(i);
                
//             }
//             i++;
//         }
//         return ans;
    }
};