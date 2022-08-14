class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) 
    {
        vector<vector<pair<int,int>>> adjlist(n+1);
        for(auto i:times)
            adjlist[i[0]].push_back({i[1],i[2]});
        vector<int> distArray(n+1,INT_MAX);
        distArray[k]=0;
        priority_queue<pair<int,int>> pq;
        pq.push({k,0});
        while(!pq.empty())
        {
            auto st=pq.top();
            pq.pop();
            for(auto i:adjlist[st.first])
            {
                if(distArray[i.first]>st.second+i.second)
                {
                    distArray[i.first]=st.second+i.second;
                    pq.push({i.first,st.second+i.second});
                }
            }
        }
        int max=0;
        for(int i=1;i<=n;i++)
        {
            max=std::max(max,distArray[i]);
        }
        return max==INT_MAX?-1:max;
        
        
    }
};