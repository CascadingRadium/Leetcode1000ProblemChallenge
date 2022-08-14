class Solution 
{
public:    
    struct comp
    {
        bool operator()(pair<string,int>&a , pair<string,int>&b)
        {
            return (a.second>b.second)||(a.second==b.second&&a.first<b.first);
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        unordered_map<string,int> hmap;
        priority_queue<pair<string,int>,vector<pair<string,int>>,comp> heap;
        for(int i=0;i<words.size();i++)
        {
            hmap[words[i]]++;
        }
        for(auto i:hmap)
        {
            heap.push(i);
            if(heap.size()>k)
                heap.pop();
        }
        vector<string> ret;
        while(!heap.empty())
        {
            ret.push_back(heap.top().first);
            heap.pop();    
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};