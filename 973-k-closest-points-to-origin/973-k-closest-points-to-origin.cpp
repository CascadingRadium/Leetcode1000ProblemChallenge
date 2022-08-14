class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        double distance=0;
        vector<pair<vector<int>,double>> hmap;
        for(auto i:points)
        {
            distance=sqrt(pow(i[0],2)+pow(i[1],2));
            hmap.push_back({i,distance});
        }
        sort(hmap.begin(),hmap.end(),[](auto &a,auto&b){return a.second<b.second;});
        vector<vector<int>> ret;
        for(int i=0;i<k;i++)
        {
            ret.push_back(hmap[i].first);
        }
        return ret;
    }
};