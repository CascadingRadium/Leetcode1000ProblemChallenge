class KthLargest {
public:
    int K;
    priority_queue<int,vector<int>,greater<int>> pq;
    KthLargest(int k, vector<int>& nums)
    {
        K=k;
        int n=nums.size();
        for(int i=0;i<min(k,n);i++)
            pq.push(nums[i]);
        for(int i=k;i<n;i++)
        {
            pq.push(nums[i]);
            pq.pop();
        }
        
    }
    int add(int val) 
    {
        pq.push(val);
        if(!pq.empty()&&pq.size()>K)
            pq.pop();
        return pq.top();
               
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */