class Solution {
public:
    double average(vector<int>& salary) 
    {
        int min=salary[0];
        int sum=salary[0];
        int max=salary[0];
        int n=salary.size();
        for(int i=1;i<n;i++)
        {
            sum+=salary[i];
            min=std::min(salary[i],min);
            max=std::max(salary[i],max);
        }
        sum-=(min+max);
        return (double)sum/(n-2);
        
    }
};