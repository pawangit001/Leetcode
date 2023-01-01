class Solution {
public:
    bool wordPattern(string pattern, string s) {
//         map<char,string>m;
//         map<string,char>mm;
//         stringstream ss(s);
//         string word;
//         int i=0;
//         int n=pattern.size();
//         int cnt=0;
//         while(ss>>word)cnt++;
//         if(cnt!=n)return false;
//         word="";
//        while(ss>>word and i<n)
//         {
//             if(m.find(pattern[i])!=m.end() )
//             {
//                 if( m[pattern[i]]==word)
//                 { cout<<word;
//                     i++ ;continue;}
//                 else
//                     return false;
//             }
//             else if(mm.find(word)==mm.end())
//             {
//                 m[pattern[i]]=word;
                
//                 mm[word]=pattern[i];
//                 i++;
//             }
//            else
//                return false;
           
//         }
//        // if(cnt!=n)return false;
//         return true;
//     }
         map<char, int> p2i;
    map<string, int> w2i;
    istringstream in(s);
    int i = 0, n = pattern.size();
    for (string word; in >> word; ++i) {
        if (i == n || p2i[pattern[i]] != w2i[word])
            return false;
        p2i[pattern[i]] = w2i[word] = i + 1;
    }
    return i == n;
    }
};