class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map<char,char>m={{')', '('}, {'}', '{'}, {']', '['}};
        for(auto i:s)
        {
            if(i=='(' or i=='{'  or i=='[')
                st.push(i);
            else
            {
                
                 if(!st.empty() and st.top()==m[i])
                 {
                     st.pop();
                 }
                else
                    st.push(i);
            }
            
        }
        return st.size()==0;
    }
};