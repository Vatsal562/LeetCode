class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int i=0,l=0;
        for(i;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>l)
                    l=arr[j];
            }
            arr[i]=l;
            l=0;
        }
        arr[i]=-1;
        return arr;
    }
};
