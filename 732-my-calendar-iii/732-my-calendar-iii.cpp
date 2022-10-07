class MyCalendarThree {
public:
    map<int,int>m;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        m[start]++;
        m[end]--;
        int res=0;
        int cur=0;
        for(auto i:m)
        {
            cur+=i.second;
            res=max(res,cur);
        }
        return res;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */