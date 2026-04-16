class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
      int n=cost.size();
      //starting from index 0;
      vector<int>dp(n,0);
      dp[0]=0;
      dp[1]=cost[0];
      for(int i=2; i<n; i++)
        dp[i]=min(dp[i-1]+cost[i-1], dp[i-2]+cost[i-2]);
      //starting at index 1;
      vector<int>dp1(n, 0);
      dp1[1]=0;
      dp1[2]=cost[1];
      for(int i=2; i<n; i++)
         dp1[i]=min(dp1[i-1]+cost[i-1], dp1[i-2]+cost[i-2]);
      return min(min(dp[n-1], dp1[n-1])+cost[n-1],min(dp[n-2],dp1[n-2])+cost[n-2]);

    }
};
