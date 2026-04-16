class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum=0;
       int res=0;
       int largest_neg=INT_MIN;
       for(int i=0; i<nums.size(); i++)
       {
          if(nums[i]<=0)
             largest_neg=max(largest_neg, nums[i]);
          sum+=nums[i];
          if(sum < 0)
            sum=0;
          res=max(res, sum);
       }
       if(res==0)
           return largest_neg;
       return res;
    }
};
