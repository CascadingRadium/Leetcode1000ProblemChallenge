class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        unordered_set<int> s1;
        int zerocnt=0;
        for(auto i : arr)
        {
            if(i==0)
                zerocnt++;
            else
                s1.insert(i);
        }
        if(zerocnt>1)
            return true;
        for(auto i:s1)
        {
            if(s1.count(2*i))
                return true;
        }
        return false;
        
    }
};