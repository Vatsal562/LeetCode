class CustomStack {
public:
    stack<int> s1,s2;
    int n;
    
    CustomStack(int maxSize) {
        n=maxSize;
    }
    
    void push(int x) {
        if(s1.size()<n) s1.push(x);
    }
    
    int pop() {
        int a;
        if(s1.size()==0) return -1;
        else{
            a = s1.top();
            s1.pop();
        }
        return a;
    }
    
    void increment(int k, int val) {
        int i = 0;
        while(s1.size()!=0){
            int j = s1.top();
            s1.pop();
            s2.push(j);
        }
        
        while(i<k and s2.empty()==false){
            int j = s2.top();
            s2.pop();
            s1.push(j+val);
            i++;
        }
        
        while(s2.empty()==false){
            int j = s2.top();
            s2.pop();
            s1.push(j);
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
