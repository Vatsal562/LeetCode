class StockSpanner {
public:
    StockSpanner() {
        
    }
    
    stack<pair<int,int>> s;
    int next(int price) {
        int i = 1;
        
        while(s.empty()==false and s.top().first<=price){
            i+=s.top().second;
            s.pop();
        }
        s.push({price,i});
        cout<<s.top().first<<" "<<s.top().second<<endl;
        return i;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
