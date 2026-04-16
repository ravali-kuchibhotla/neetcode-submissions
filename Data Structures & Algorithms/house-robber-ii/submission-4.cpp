class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
          return 0;
        if (n==1)
          return nums[0];
        //if you start from house 0, cannot choose house n-1
        vector<int>dp(n, 0);
        dp[0]=nums[0];
        dp[1]=nums[0];
        for(int i=2; i<n-1; i++)
          dp[i]=max(dp[i-2]+nums[i], dp[i-1]);
        dp[n-1]=dp[n-2];
        //if we start from house 1; can choose house n-1
        vector<int>dp1(n, 0);
        dp1[0]=0;
        dp1[1]=nums[1];
        for(int i=2; i<n; i++)
          dp1[i]=max(dp1[i-2]+nums[i], dp1[i-1]);
        return max(dp[n-1], dp1[n-1]);

    }
};
