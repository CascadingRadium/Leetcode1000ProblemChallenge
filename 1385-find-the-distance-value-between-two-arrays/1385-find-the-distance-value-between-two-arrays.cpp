class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        sort(arr2.begin(),arr2.end());
        int n=arr2.size();
        int k=0;
        for(auto i:arr1)
        {
            int l=0,r=n-1;
            while(r-l>1)
            {
                int mid=l+(r-l)/2;
                if(arr2[mid]<i)
                    l=mid;
                else
                    r=mid;
            }
            if(abs(arr2[l]-i)>d&&abs(arr2[r]-i)>d)
                ++k;
        }
        return k;
    }
};