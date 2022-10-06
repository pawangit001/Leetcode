class TimeMap {
public:
   unordered_map<string,unordered_map<int,string>>keytime;
 // unordered_map<int,string>m2;
    TimeMap(){
        
    }
    
    void set(string key, string value, int timestamp) {
        keytime[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
       
       if(keytime.count(key)==0)return "";
        for(int i=timestamp;i>0;i--)
        {
            if(keytime[key].count(i))return keytime[key][i];
        }
        
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */