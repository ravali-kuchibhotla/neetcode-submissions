class Solution {
public:
    void subsets_rec(vector<int>&nums,int l, int r, vector<int>&v ,vector<vector<int>>&ans)
    {
        if(l>r)
          return;
        v.push_back(nums[l]);
        ans.push_back(v);
        for(int i=l+1; i<=r; i++)
           subsets_rec(nums, i, r, v, ans);
        v.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        ans.push_back(v);
        for(int i=0; i<nums.size(); i++)
           subsets_rec(nums, i, nums.size()-1, v, ans);
        return ans;
    }
};
