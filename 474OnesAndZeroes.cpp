class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(auto& ele:strs){
            int z=count(ele.begin(),ele.end(),'0');
            int o=ele.size()-z;

            for(int i=m;i>=z;i--){
                for(int j=n;j>=o;j--){
                    dp[i][j]=max(dp[i][j],dp[i-z][j-o]+1);
                }
            }
        }
        return dp[m][n];
    }
};