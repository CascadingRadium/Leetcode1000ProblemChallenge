class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        auto comp=[](pair<int,int> a,pair<int,int> b){if(b.first==a.first)return b.second<a.second;else return b.first>a.first;};
        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(comp)> pq(comp);
        pair<int,int>temp;
        for(int i=0;i<mat.size();i++)
        {
            int x=0;
            for(auto j:mat[i])
            {
                if(j==1)
                    ++x;
            }
            temp=make_pair(x*-1,i);
            pq.push(temp);
        }
        vector<int>ret;
        while(k>0)
        {
            ret.push_back(pq.top().second);
            pq.pop();
            --k;
        }
        return ret;   
    }
};