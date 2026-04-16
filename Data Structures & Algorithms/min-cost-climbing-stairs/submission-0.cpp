class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1);
        //starting from index 1;
        dp[0]=0;
        dp[1]=cost[0];
        for(int i=2; i<=n; i++)
          dp[i]=min(dp[i-2]+cost[i-2], dp[i-1]+cost[i-1]);
        //starting from index 1;
        vector<int>dp1(n+1);
        dp1[0]=0;
        dp1[1]=0;
        for(int i=2; i<=n; i++)
          dp1[i]=min(dp1[i-2]+cost[i-2], dp1[i-1]+cost[i-1]);
        return min(dp[n], dp1[n]);
    }
};
