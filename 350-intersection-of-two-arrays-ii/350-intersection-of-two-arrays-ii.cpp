class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> *big,*small;
        if(nums1.size()<nums2.size())
        {
            small=&nums1;
            big=&nums2;
        }
        else
        {
            big=&nums1;
            small=&nums2;
        }
        unordered_map<int,int> hmap;
        for(auto i:*big)
            hmap[i]++;
        vector<int> ret;
        for(auto i:*small)
        {
            if(hmap[i]>0)
            {
                ret.push_back(i);
                --hmap[i];
            }
        }
        return ret;
            
        
    }
};