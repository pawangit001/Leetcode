class Solution {
public:
    int maxDistance(vector<int>& colors) {
    int i=0,j=colors.size()-1;
        int res=0;
        while(i<j)
        {
            if(colors[i]!=colors[j]){res=max(res,j-i);break;}
            else
                i++;
        }
        i=0;
        while(i<j)
        {
            if(colors[i]!=colors[j]){res=max(res,j-i);break;}
            else
                j--;
        }
        return res;
       
    }
};