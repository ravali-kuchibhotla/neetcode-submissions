class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(i==0 || (nums[i]!=nums[i-1]))
            {
                int sum=-nums[i];
                int j=i+1;
                int k=nums.size()-1;
                while(j<k)
                {
                    if((nums[j]+nums[k])==sum)
                    {
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[k]);
                        ans.push_back(v);
                        while(j<k && nums[j]==nums[j+1]) j++;
                        while(j<k && nums[k]==nums[k-1]) k--;
                        j++;
                        k--;
                    }
                    else if((nums[j]+nums[k])>sum)
                        k--;
                    else
                        j++;
                }
            }
        }
        return ans;
    }
};
