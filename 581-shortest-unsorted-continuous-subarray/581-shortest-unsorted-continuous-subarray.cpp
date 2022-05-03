class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        //2 6 4 8 10 9 15
        //2 4 6 8 9 10 15
        deque<int> q;
        vector<int> v(nums.size());
        v=nums;
        int c=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]!=nums[i])
                q.push_back(i);
        }
        if(q.empty())
            return 0;
        return q.back()-q.front()+1;
    }
};