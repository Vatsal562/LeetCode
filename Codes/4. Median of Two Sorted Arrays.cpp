class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {    
        for(int i=0;i<nums2.size();i++){
            nums1.insert(nums1.begin()+i,nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        if(nums1.size()%2!=0)
            return (double)nums1[(nums1.size()-1)/2];
        else
            return (double)(nums1[nums1.size()/2] + nums1[(nums1.size()/2)-1])/2;
    }
};
