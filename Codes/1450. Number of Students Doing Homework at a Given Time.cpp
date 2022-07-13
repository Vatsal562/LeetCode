class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count=0;
        for(int i=0;i<startTime.size();i++){
            int n = startTime[i];
            int m = endTime[i];
            if(n==m)
            {
                if(queryTime==n){
                    count++;   
                }
            }
            else if(queryTime>n && queryTime<m || queryTime==n || queryTime==m)
                count++;
        }
        return count;
    }
};
