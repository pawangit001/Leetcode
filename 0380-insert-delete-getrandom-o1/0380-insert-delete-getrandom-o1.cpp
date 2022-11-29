class RandomizedSet {
    private:
    unordered_map<int,int>m;
    vector<int>v;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.count(val))return false;
        else
        {
            v.push_back(val);
            m[val]=v.size()-1;
            return true;
        }
    }
    
    bool remove(int val) {
        if(m.count(val)==false)return false;
        else
        {
           
            {int i=m[val];
            int last=v.back();
            
            v[i]=last;
            m[last]=i;
            m.erase(val);
              v.pop_back();
           }
            return true;
        }
    }
    
    int getRandom() {
        //srand(time(0));
        int n=v.size();
       
        return v[rand()%n];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */