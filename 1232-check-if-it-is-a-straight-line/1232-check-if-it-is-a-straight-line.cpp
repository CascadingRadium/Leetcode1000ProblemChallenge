class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        float m;
        if((coordinates[1][0]-coordinates[0][0]!=0))
            m=(coordinates[1][1]-coordinates[0][1])/(float)(coordinates[1][0]-coordinates[0][0]);
        else
            m=INT_MAX;
        if(m==INT_MAX)
        {
            for(int i=3;i<coordinates.size();i++)
            {
                if(coordinates[i][0]!=coordinates[0][0])
                    return false;
            }
            return true;
        }
        
        int c=coordinates[0][1]-(m*coordinates[0][0]);
        cout<<m<<' '<<c;
        for(int i=2;i<coordinates.size();i++)
        {
            if(coordinates[i][1]!=(m*coordinates[i][0])+c)
                return false;
        }
        return true;
        
    }
};