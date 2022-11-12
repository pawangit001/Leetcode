class MedianFinder {
    private:
      priority_queue<int>mnNum;
    priority_queue<int,vector<int>,greater<int>>mxNum;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(mnNum.empty() or mnNum.top()>num)mnNum.push(num);
        else
            mxNum.push(num);
        if(mnNum.size()>mxNum.size()+1)
        {
            mxNum.push(mnNum.top());
            mnNum.pop();
        }
        else if(mnNum.size()+1<mxNum.size())
        {
                 mnNum.push(mxNum.top());
            mxNum.pop();
         
        }
    }
    
    double findMedian() {
        if(mnNum.size()==mxNum.size())
            return mnNum.size()==0?0:(mnNum.top()+mxNum.top())/2.0;
        else
            return mxNum.size()>mnNum.size()?mxNum.top():mnNum.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */