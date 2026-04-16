class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
           return nums[0];
        //start from house 1; cannot consider last house
        vector<int>dp(n-1);
        dp[0]=nums[0];
        dp[1]=nums[0];
        for(int i=2; i<n-1; i++)
           dp[i]=max(dp[i-1], dp[i-2]+nums[i]);
        //start from house 2; can consider last house;
        vector<int>dp1(n);
        dp1[0]=0;
        dp1[1]=nums[1];
        for(int i=2; i<n; i++)
           dp1[i]=max(dp1[i-1], dp1[i-2]+nums[i]);
        return max(dp[n-2], dp1[n-1]);
    }
};
