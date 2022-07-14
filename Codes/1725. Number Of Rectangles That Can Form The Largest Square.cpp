class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> ans;
        int great=0,count=0;
        for(int i=0;i<rectangles.size();i++){
            if(rectangles[i][0]>=rectangles[i][1]){
                ans.push_back(rectangles[i][1]);
            }else{
                ans.push_back(rectangles[i][0]);
            }
        }
        for(auto x:ans){
            if(x>great)
                great = x;
        }
        for(auto x:ans){
            if(x==great)
                count++;
        }
        
        return count;
    }
};
