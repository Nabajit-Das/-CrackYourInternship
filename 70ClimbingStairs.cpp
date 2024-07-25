class Solution {
public:
    vector<int>dp;
    int d(int n){
        dp.resize(n+1,0);
        dp[n]=1;
        dp[n-1]=2;
        for(int i=n-2;i>=1;i--){
            dp[i]=dp[i+1]+dp[i+2];
        }
        return dp[1];
    }
    int climbStairs(int n) {
        return d(n);
    }
};