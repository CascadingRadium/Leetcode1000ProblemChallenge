class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        multimap<int,int> hmap;
        int ret=0;
        for(int i=0;i<nums.size();i++)
        {
            if(hmap.count(k-nums[i])&&hmap.find(k-nums[i])->second!=-1)
            {
                ret++;
                hmap.erase(hmap.find(k-nums[i]));
            }
            else    
                hmap.insert(make_pair(nums[i],i));
        }
        return ret;
    }
};