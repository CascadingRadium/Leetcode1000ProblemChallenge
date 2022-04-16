class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> x(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),x.begin());
        double ret;
        int n=x.size();
        if(n%2==0)
            ret=(x[n/2]+x[(n/2)-1])/2.0;
        else
            ret=x[n/2];
        return ret;
        
        
    }
};