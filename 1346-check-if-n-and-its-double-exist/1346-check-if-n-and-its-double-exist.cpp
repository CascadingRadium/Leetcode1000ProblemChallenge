class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        unordered_set<int> s1;
        for(auto i:arr)
        {
            if(s1.count(2*i)||(i%2==0&&s1.count(i/2)))
                return true;
            s1.insert(i);
        }
        return false;
        
    }
};