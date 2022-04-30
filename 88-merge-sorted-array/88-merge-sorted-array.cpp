class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int nums2index=0,i=0;
        if(n==0)
            return;
        while(i!=m&&nums2index!=n)
        {
            if(nums1[i]>=nums2[nums2index])
            {
                nums1.insert(nums1.begin()+i,nums2[nums2index]);
                ++nums2index;
                ++m;
            }
            i++;
        }
        nums1.erase(nums1.end()-(n),nums1.end());
        while(nums2index!=n)
        {
            nums1.push_back(nums2[nums2index]);
            ++nums2index;
        }
    }
};