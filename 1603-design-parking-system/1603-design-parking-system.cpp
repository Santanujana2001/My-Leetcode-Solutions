class ParkingSystem {
public: int b,m,s;
//     Storing The Data Basically
    ParkingSystem(int big, int medium, int small) {
        b=small;
        m=medium;
        s=big;
    }
//     Checking If The Slot Is Avilable Or Not And If It's Avilable Then Decrement Slot By 1 And Return True;
//     Otherwise Return False;
    bool addCar(int carType) {
        if(carType==1 && s){
            s--;
            return true;
        }
        if(carType==2 &&m){
            m--;
            return true;    
        }
        if(carType==3 &&b){
            b--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */