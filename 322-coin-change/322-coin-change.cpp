class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        int M=coins.size()+1;
        int N=amount+1;
        vector<vector<int>> matrix(M,vector<int>(N));
        for(int i=0;i<N;i++)
            matrix[0][i]=INT_MAX-1;
        for(int coinIndex=1;coinIndex<M;coinIndex++)
        {
            int coin = coins[coinIndex-1];
            for(int amt=1;amt<N;amt++)
            {
                if(coin>amt)
                    matrix[coinIndex][amt]=matrix[coinIndex-1][amt];
                else
                {
                    matrix[coinIndex][amt]=min(matrix[coinIndex-1][amt],1+matrix[coinIndex][amt-coin]);    
                }
            }
        }
        return matrix[M-1][N-1]>=INT_MAX-1?-1:matrix[M-1][N-1];
    }
};