class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        stack<int> st;
        unordered_map<int,int> hmap;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!st.empty()&&st.top()<nums2[i])
                st.pop();
            hmap[nums2[i]]=st.empty()?-1:st.top();
            st.push(nums2[i]);    
        }
        vector<int> ret;
        for(auto i:nums1)
            ret.push_back(hmap[i]);
        return ret;
        
    }
};