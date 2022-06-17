class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int xd=(c[1][0]-c[0][0]);
        int yd=(c[1][1]-c[0][1]);
        int curx,cury;
        for(int i=2;i<c.size();i++){
            curx=(c[i][0]-c[i-1][0]);
            cury=(c[i][1]-c[i-1][1]);
            if(xd*cury!=yd*curx){
                return false;
            }
        }
        return true;
    }
};