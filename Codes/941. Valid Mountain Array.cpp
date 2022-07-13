class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int x=0;
        if(arr.size()<3)
            return false;
        else{
            for(int i=0;i<arr.size()-1;i++){
                if(arr[i]>=arr[i+1]){
                    x++;
                    if(i==0){return false;}
                    else{
                        for(int j=i;j<arr.size()-1;j++){
                        if(arr[j]<=arr[j+1])
                            return false;
                    }
                    }
                }
            }
        }
        if(x==0){return false;}
        return true;
    }
};
