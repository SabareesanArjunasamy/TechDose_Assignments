class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        //number of coins in n
        int n=coins.size();
        //dp table
        int dp[n+1][amount+1];
        
        for(int i = 0; i<= n; ++i)
        {
            for(int j = 0; j <= amount; ++j)
            {
                //if the amount is zero we can make it with 0 coins
                if(j == 0)
                {
                    dp[i][j] = 0;
                }
                //if amount > 0 and you have 0 coins
                else if(i == 0)
                {
                    //not possible so infinity
                    dp[i][j] = 1e5;
                }
                //exclusion case
                else if(coins[i-1] > j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                //min of inclusion, exclusion
                else
                {
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
            }
        }
        return dp[n][amount]>1e4 ? -1: dp[n][amount];
    }
};