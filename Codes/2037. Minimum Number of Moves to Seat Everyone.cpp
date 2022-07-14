class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int sum=0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for(int i=0;i<seats.size();i++){
            int a = max(seats[i],students[i]) - min(seats[i],students[i]);
            sum+=a;
        }
        return sum;
    }
};
