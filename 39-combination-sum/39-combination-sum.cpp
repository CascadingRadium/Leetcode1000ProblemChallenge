class Solution {
public:
    
    void backtrck(vector<int> &current, vector<vector<int>> &ans, int sum, int target,int start,vector<int>& candidates)
    {
        if(sum==target)
        {
            ans.push_back(current);
        }
        if(sum>target)
            return;
        else
        {
            for(int i=start;i<candidates.size();i++)
            {
                sum+=candidates[i];
                current.push_back(candidates[i]);
                backtrck(current,ans,sum,target,i,candidates);
                sum-=candidates[i];
                current.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ret;
        vector<int> cur;
        backtrck(cur,ret,0,target,0,candidates);
        return ret;
        
    }
};