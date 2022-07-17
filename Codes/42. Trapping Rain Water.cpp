class Solution {
public:
    int trap(vector<int>& height) {
        int h = height.size();
        vector<int> left{height[0]};
        vector<int> right{height[h-1]};
        vector<int> water;
        int sum = 0;
        
        //find absolute max value at left of each element
        for(int i=1;i<h;i++){
            int a = max(left[i-1],height[i]);
            left.push_back(a);
        }
        for(auto x:left) cout<<x<<" ";
        cout<<endl;
        
        //find absolute max value at right of each element
        for(int i=h-2;i>=0;i--){
            int a = max(right[h-i-2],height[i]);
            right.push_back(a);
        }
        reverse(right.begin(),right.end());
        for(auto x:right) cout<<x<<" ";
        cout<<endl;
        
        for(int i=0;i<h;i++){
            int a = min(right[i],left[i]) - height[i];
            water.push_back(a);
        }
        
        for(auto x:water)
            sum = sum+x;
        
        return sum;
        
    }
};
