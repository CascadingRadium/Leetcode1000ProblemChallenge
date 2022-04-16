class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,pair<bool,int>> hmap;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++)
            hmap[nums[i]]={true,i};
        for(int i=0;i<nums.size();i++)
        {
            if(hmap[target-nums[i]].first&&hmap[target-nums[i]].second!=i)
            {
                st.insert(i);
                st.insert(hmap[target-nums[i]].second);
            }
                 
        }
        vector<int> ret(st.begin(),st.end());
        return ret;
        
    }
};