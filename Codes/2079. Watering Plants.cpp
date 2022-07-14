class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int a = capacity;
        int count = 0;
        int i = 0;
            
        while(capacity>=plants[i] and i<plants.size()){
        capacity = capacity - plants[i];
        i++;
        count++;
            
        if(i==plants.size()) break;
            
        if(capacity<plants[i]){
            capacity = a;
            count = count + 2*i;
            }
        }
        
        return count;
    }
};
