class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            dp[i] = (i & 1) ? dp[i - 1] + 1 : dp[i / 2];
        }
        return dp;
    }
};