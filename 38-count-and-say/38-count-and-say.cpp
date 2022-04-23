class Solution {
public:
    string countAndSay(int n) 
    {
        vector<string> row(n+1);
        row[0]="";
        row[1]="1";
        for(int i=2;i<=n;i++)
        {
            string y="";
            string x=row[i-1];
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
            row[i]=y;
        }
        return row[n];
    }
};