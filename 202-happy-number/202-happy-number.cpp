class Solution {
public:
    bool isHappy(int n) {
         unordered_set<long long>st;
        
        while(n!=1)
      {  string s=to_string(n);
        int sz=s.size();
        int i=0,j=sz-1;
       long long  t=0;
        while(i<j)
        {
            long long x=s[i]-'0';
            long long y=s[j]-'0';
            t+=(x*x);
            t+=(y*y);
            i++;
            j--;
            
        }
       if(sz%2!=0){long long mid=s[i]-'0'; t+=(mid*mid);};
       if(st.find(t)!=st.end())return false;
       st.insert(t);
       n=t;
      }
        if(n==1)return true;
        else
            return false;
    }
};