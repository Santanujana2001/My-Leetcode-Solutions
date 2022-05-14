class MyCircularQueue {
    int *arr,front,rear,size;
public:
    MyCircularQueue(int n) {
        size=n;
        arr=new int[size];
        rear=front=-1;
    }
    
    bool enQueue(int value) {
        if( (front==0 && rear==size-1) || rear==front-1 ){
            return 0;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(front!=0 && rear==size-1){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=value;
        return 1;
    }
    
    bool deQueue() {
        if(front==-1){
            return 0;
        }
        arr[front]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return 1;
    }
    
    int Front() {
        // return arr[front];
        // return 1;
        if(front==-1){
            return -1;
        }
        return arr[front];
        
    }
    
    int Rear() {
        // return arr[rear];
        // return 1;
        if(front==-1){
            return -1;
        }
        return arr[rear];
        
    }
    
    bool isEmpty() {
        if(front==-1){
            return 1;
        }
        return 0;
    }
    
    bool isFull() {
        if( (front==0 && rear==size-1) || (rear==(front-1)%(size-1)) ){
            return 1;
        }
        return 0;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */