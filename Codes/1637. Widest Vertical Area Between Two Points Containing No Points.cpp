class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int h = 0;
        vector<int> ans;
        for(int i=0;i<points.size();i++){
            ans.push_back(points[i][0]);
        }
        sort(ans.begin(),ans.end());
        
        for(int i=1;i<ans.size();i++)
            h = max(h,ans[i]-ans[i-1]);
        
        return h;
    }
};
