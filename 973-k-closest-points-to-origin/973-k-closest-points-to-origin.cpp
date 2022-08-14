class Solution {
public:
    struct comp
    {
        bool operator()(pair<vector<int>,double>& a, pair<vector<int>,double>& b)
        {
            return a.second<b.second;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        double distance=0;
        priority_queue<pair<vector<int>,double>,vector<pair<vector<int>,double>>,comp> pq;
        for(auto i:points)
        {
            distance=sqrt(pow(i[0],2)+pow(i[1],2));
            if(pq.size()<k)
                pq.push({i,distance});
            else
            {
                pq.push({i,distance});
                pq.pop();
            }
        }
        vector<vector<int>> ret;
        while(!pq.empty())
        {
            ret.push_back(pq.top().first);
            pq.pop();
        }
        return ret;
    }
};