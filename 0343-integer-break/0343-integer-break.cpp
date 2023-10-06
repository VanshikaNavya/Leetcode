class Solution {
public:
    int f(int i, int target, vector<vector<int>>& dp){
        if(i==1) return 1;
        if(dp[i][target]!=-1) return dp[i][target];
        int not_pick=f(i-1, target, dp);
        int pick=0;
        if(target>=i){
           pick=i*f(i, target-i, dp);
        }
        return dp[i][target]=max(pick, not_pick);
    }
    int integerBreak(int n) {
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return f(n-1, n, dp);
    }
};
