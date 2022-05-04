class CustomStack {
public:
    int maxi;
    vector<int>v;
    CustomStack(int maxSize) {
        this->maxi=maxSize;
    }
    
    void push(int x) {
        if(v.size()<maxi){
            v.push_back(x);
        }
    }
    
    int pop() {
        if(!(v.size())){
            return -1;
        }
        int t=v.back();
        v.pop_back();
        return t;
    }
    
    void increment(int k, int val) {
        int x=k;
        if(k>v.size()){
            x=v.size();
        }
        for(int i=0;i<x;i++){
            v[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */