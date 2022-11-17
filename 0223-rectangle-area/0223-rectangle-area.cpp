class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int areaOfA=(ay2-ay1)*(ax2-ax1);
        int areaOfB=(by2-by1)*(bx2 -bx1);
        // calculate x overlap 
        int left= max(ax1,bx1);
        int right = min(ax2,bx2);
        int xOverlap =right -left;
        // calculate y overlap 
        int top = min(ay2,by2);
        int bt=max(ay1,by1);
        int yOverlap =top-bt;
        int areaOfOverlap =0;
        // if the rectangle overlap each other then calculate
        // the area of the overlap
        if(xOverlap >0 and yOverlap>0)
            areaOfOverlap = xOverlap * yOverlap;
        int totalArea = areaOfA + areaOfB-areaOfOverlap;
        return totalArea;
    }

// 27 + 24 = 51-6 = 45
};