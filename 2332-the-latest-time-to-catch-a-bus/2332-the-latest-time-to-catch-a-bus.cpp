class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        int j=0,pre=-1,ans=0,c=0;
        sort(buses.begin(),buses.end());
        sort(passengers.begin(),passengers.end());
        for(int i=0;i<buses.size();i++){
            c=0;
            for(;c<capacity && j<passengers.size() && passengers[j]<=buses[i] ;j++){
                if(passengers[j]-1!=pre){
                    ans=passengers[j]-1;
                }
                pre=passengers[j];
                c++;
            }
            if(c<capacity && buses[i]!=pre){
                ans=buses[i];
            }
        }
        return ans;
    }
};