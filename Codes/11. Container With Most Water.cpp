class Solution {
public:
    int maxArea(vector<int>& height) {
        // int ans = 0;
        // int mul = 0;
        // int a = height.size();
        // for(int i=0;i<a;i++){
        //     int k = 1;
        //     for(int j=i+1;j<a;j++){
        //         mul = min(height[i],height[j])*k;
        //         ans = max(ans,mul);
        //         k++;
        //     }
        // }
        // return ans;
        
        int ans = 0;
        int i = 0;
        int j = height.size()-1;
        
        while(i<j){
            int h = min(height[i],height[j]);
            ans = max(ans, (j-i)*h);
            while(height[i]<=h and i<j) i++;
            while(height[j]<=h and i<j) j--;
        }
        return ans;
    }
};
