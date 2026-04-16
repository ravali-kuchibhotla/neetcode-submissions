class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        vector<int>prefix;
        vector<int>suffix;
        int len=nums.size();
        prefix.push_back(nums[0]);
        int prefix_prod=nums[0];
        suffix.push_back(nums[len-1]);
        int suffix_prod=nums[len-1];
        for(int i=1; i<len; i++)
        {
           prefix_prod*=nums[i];
           prefix.push_back(prefix_prod);
        }
        for(int i=len-2; i>=0; i--)
        {
            suffix_prod*=nums[i];
            suffix.push_back(suffix_prod);
        }
        reverse(suffix.begin(), suffix.end());
        for(int i=0; i<len; i++)
           cout<<suffix[i]<<" ";
        for(int i=0; i<len;i++)
        {
            if(i==0)
               ans.push_back(suffix[i+1]);
            else if(i==len-1)
               ans.push_back(prefix[i-1]);
            else
               ans.push_back(prefix[i-1]*suffix[i+1]);
        }
        return ans;
    }
};
