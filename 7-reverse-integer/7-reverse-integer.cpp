class Solution {
public:
    int reverse(int x) 
    {
        string pop=to_string(x);
        std::reverse(pop.begin(),pop.end());
        if(pop.back()=='-')
        {
            pop.pop_back();
            pop="-"+pop;
        }
        int y;
        try{
            y=stoi(pop);
        }catch (const exception&e){
            return 0;}
        return y;
    }
};