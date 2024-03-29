class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        if(m * n == 0){
            return m + n;
        }

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for(int i = 0; i < m + 1; ++i){
            dp[i][0] = i;
        }
        for(int i = 0; i < n + 1; ++i){
            dp[0][i] = i;
        }

        for(int i = 1; i < m + 1; ++i){
            for(int j = 1; j < n + 1; ++j){
                if(word1[i - 1] != word2[j - 1])
                    dp[i][j] = min(min(dp[i - 1][j - 1] + 1, dp[i][j - 1] + 1), dp[i - 1][j] + 1);
                else
                    dp[i][j] = min(min(dp[i - 1][j - 1], dp[i][j - 1] + 1), dp[i - 1][j] + 1);
            }
        }

        return dp[m][n];
    }
};