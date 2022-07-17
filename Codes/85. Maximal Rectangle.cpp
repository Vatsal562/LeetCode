class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int result = 0;
        vector<int> v;
        
        //we use these loops to convert our matrix in a 1D array
        for(int i=0;i<col;i++) v.push_back(matrix[0][i] - '0');
        result = max(result, largestArea(v));
        
        for(int i=1;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='0') v[j]=0;
                else v[j] = v[j] + (matrix[i][j]-'0');
            }
            result = max(result, largestArea(v));
        }
        
        return result;
        
    }
    
    //we use this function after each iteration of vector to find the maximum 
    //rectangle area after each iteration.
    int largestArea(vector<int>& h) {
        vector<int> nsl,nsr;
        stack<pair<int,int>> s1,s2;
        int ans = 0;
        
        for(int i=0;i<h.size();i++){
            while(s1.empty()==false and s1.top().first>=h[i]){
                s1.pop();
            }
            if(s1.empty()==true) nsl.push_back(-1);
            else nsl.push_back(s1.top().second);
            
            s1.push({h[i],i});
        }
        //for(auto x:nsl) cout<<x<<" ";
        
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
