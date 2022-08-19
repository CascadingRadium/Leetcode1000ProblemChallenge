class Solution {
public:
    bool valid(int sol, vector<int>&position,int m)
    {
        int cnt=1;
        int curPos=position[0];
        for(int i=1;i<position.size();i++)
        {
            if(position[i]-curPos>=sol)
            {
                curPos=position[i];
                cnt++;
            }   
        }
        return cnt>=m;
        
    }
    int maxDistance(vector<int>& position, int m) 
    {
        sort(position.begin(),position.end());
        int l=0,r=position.back()-position.front();
        while(l<r)
        {
            auto mid= r-(r-l)/2;
            if(valid(mid,position,m))
                l=mid;
            else
                r=mid-1;
        }
        return l;
    }
};