class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set s1(nums1.begin(),nums1.end());
        unordered_set s2(nums2.begin(),nums2.end());
        unordered_map<int,int> hmap;
        for(auto i:s1)
            hmap[i]++;
        for(auto i:s2)
            hmap[i]--;
        vector<int> ret;
        for(auto i:hmap)
            if(i.second==0)
                ret.push_back(i.first);
        return ret;
    }
};