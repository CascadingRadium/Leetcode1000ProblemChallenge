class Solution {
public:
    
    struct comp
    {
        bool operator()(pair<int,int> &a, pair<int,int> &b)
        {
            return a.first*b.second<b.first*a.second;
        }
    };
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) 
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp> pq;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                pq.push({arr[i],arr[j]});
                if(pq.size()>k)
                    pq.pop();
            }
        }
        auto x=pq.top();
        return {x.first,x.second};
    }
};