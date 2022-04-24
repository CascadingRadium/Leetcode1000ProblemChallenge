class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set s1(nums1.begin(),nums1.end());
        unordered_set s2(nums2.begin(),nums2.end());
        vector<int> ret;
        if(s1.size()<s2.size())
        {
            for(auto i:s1)
                if(s2.find(i)!=s2.end())
                    ret.push_back(i);
        }
        else
        {
             for(auto i:s2)
                if(s1.find(i)!=s1.end())
                    ret.push_back(i);
        }
        return ret;
    }
};