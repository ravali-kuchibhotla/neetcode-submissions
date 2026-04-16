class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int, int>m;
        m[nums[0]]=0;
        for(int i=1; i<nums.size(); i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                auto it=m.find(target-nums[i]);
                ans.push_back(it->second);
                ans.push_back(i);
                return ans;
            }
            m[nums[i]]=i;
        }
    }
};
