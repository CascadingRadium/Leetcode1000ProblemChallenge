class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int l=0,r=arr.size()-1;
        int maxs=INT_MIN;
        int maxind=0;
        while(r-l>1)
        {
            int mid=l+(r-l)/2;
            if(arr[mid+1]<arr[mid])
                r=mid;
            else
                l=mid;
        }
        if(arr[l]<arr[r])
            return r;
        return l;
        
    }
};