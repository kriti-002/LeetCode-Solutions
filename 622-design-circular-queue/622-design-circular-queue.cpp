class MyCircularQueue {
    private:
    vector<int>cq; int n, front=0 ,rear=0, size=0;
public:
     
    MyCircularQueue(int k) {
        cq.resize(k);
        n=k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        if(isEmpty()){
            front=rear=0;
            cq[rear]=value;
            size++;
            return true;
        }
        rear++;
        rear%=n;
        cq[rear]=value;
        size++;
        return true;
    }
    
    bool deQueue() {
       if(isEmpty()) return false;
       front= (front+1)%n;
       size--;
       return true;
    }
    
    int Front() {
       if(isEmpty()) return -1;
       return cq[front]; 
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return cq[rear];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return n==size;
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