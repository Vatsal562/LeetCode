class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        vector<int> nsl,nsr;
        stack<pair<int,int>> s1,s2;
        int ans = 0;
        
        //make array for nearest smaller to left
        for(int i=0;i<h.size();i++){
            while(s1.empty()==false and s1.top().first>=h[i]){
                s1.pop();
            }
            if(s1.empty()==true) nsl.push_back(-1);
            else nsl.push_back(s1.top().second);
            
            s1.push({h[i],i});
        }
        //for(auto x:nsl) cout<<x<<" ";
        
        //make array for neares smaller to right
        for(int i=h.size()-1;i>=0;i--){
            while(s2.empty()==false and s2.top().first>=h[i]){
                s2.pop();
            }
            if(s2.empty()==true) nsr.push_back(h.size());
            else nsr.push_back(s2.top().second);
            
            s2.push({h[i],i});
        }
        reverse(nsr.begin(),nsr.end());
        //for(auto x:nsr) cout<<x<<" ";
        
        for(int i=0;i<h.size();i++){
            int area = h[i]*(nsr[i]-nsl[i]-1);
            ans = max(ans,area);
        }
        
        return ans;
    }
};
