class Solution {
public:
    string countAndSay(int n) 
    {
        vector<string> row(n+1);
        row[0]="";
        row[1]="1";
        for(int rowindex=2;rowindex<=n;rowindex++)
        {
            string y="";
            string x=row[rowindex-1];
            int n=x.length();
            for(int i=0;i<n;i++)
            {
                char num=x[i];
                int cnt=1;
                for(int j=i+1;j<n;j++)
                {
                    if(x[j]!=num)
                        break;
                    cnt++;
                }
                y+=(to_string(cnt));
                y.push_back(num);
                i+=(cnt-1);
            }
            row[rowindex]=y;
        }
        return row[n];
    }
};