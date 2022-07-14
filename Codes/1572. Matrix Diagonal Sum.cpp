class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int a = mat.size();
        if(a==1) return mat[0][0];
        
        if(a%2==0){
            for(int i=0;i<a;i++){
                sum+=mat[i][i];
                sum+=mat[i][a-1-i];
            }
        }
        else{
            for(int i=0;i<a;i++){
                sum+=mat[i][i];
                sum+=mat[i][a-1-i];
            }
            sum=sum-mat[((a-1)/2)][((a-1)/2)];
        }
        
        return sum;
    }
};
