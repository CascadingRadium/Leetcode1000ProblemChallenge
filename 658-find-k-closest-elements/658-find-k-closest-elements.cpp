class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        auto ptr2=lower_bound(arr.begin(),arr.end(),x);
        auto ptr1=ptr2-1;
        vector<int> ret;
        while(ptr1!=arr.begin()-1 && ptr2!=arr.end()&&ret.size()<k)
        {
            if(abs(*ptr1-x)<abs(*ptr2-x) || (abs(*ptr1-x)==abs(*ptr2-x) && *ptr1<*ptr2))
            {
                ret.push_back(*ptr1);
                ptr1--;
            }
            else 
            {
                ret.push_back(*ptr2);
                ptr2++;
            }
                
        }
        while(ptr1!=arr.begin()-1 && ret.size()<k)
        {
            ret.push_back(*ptr1);
            ptr1--;
        }
        while(ptr2!=arr.end() && ret.size()<k)
        {
            ret.push_back(*ptr2);
            ptr2++;
        }
        sort(ret.begin(),ret.end());
        return ret;
    }
};