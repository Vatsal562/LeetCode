class Solution {
public:
    int thirdMax(vector<int>& nums) {
//         unordered_set<int> s;
//         int temp1=INT_MIN,temp2=INT_MIN,temp3=INT_MIN;
        
//         for(auto x: nums){
//             s.insert(x);
//         }
        
//         for(auto x: s){
//             cout<<x<<" ";
//         }
        
//         if(s.size()<3){
//             for(auto x:s){
//                 if(x>temp1) temp1=x;
//             }
//             return temp1;
//         }
        
//         else if(s.size()>=3){
//             for(auto x:s){
//                 if(x>temp1){
//                     temp3=temp2;
//                     temp2=temp1;
//                     temp1=x;
//                 }
//                 else if(x<temp1 and x>temp2){
//                     temp3=temp2;
//                     temp2=x;
//                 } 
//                 else if(x<temp2 and x>temp3) temp3 = x;
//             }
//         }
//         return temp3;
        
        set<int> s;
        for(auto x: nums){
            s.insert(x);
        }
        
        for(auto x: s){
            cout<<x<<" ";
        }
        
        cout<<endl<<s.size();
        
        if(s.size()<3) return *s.rbegin();
        else if(s.size()==3) return *s.begin();
        else if(s.size()>3){
            while(s.size()>3){
                s.erase(s.begin());
            }
        }
        return *s.begin();
    }
};
