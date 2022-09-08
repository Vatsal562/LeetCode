class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        vector<int> v;
        
        for(int i=prices.size()-1;i>=0;i--){
            while(s.empty()==false and s.top()>prices[i]){
                s.pop();
            }
            if(s.empty()==true) v.push_back(0);
            else v.push_back(s.top());
            
            s.push(prices[i]);
        }
        
        reverse(v.begin(),v.end());
        
        for(int i=0;i<prices.size();i++){
            prices[i] = prices[i] - v[i]; 
        }
        
        return prices;
    }
};
