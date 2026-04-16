class Solution {
public:
    void swap(vector<int>&nums, int i, int j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    void permute_rec(vector<int>nums, int l, int r, vector<vector<int>>&ans)
    {
        if(l==r)
            ans.push_back(nums);
        else
        {
            for(int i=l; i<=r; i++)
            {
                swap(nums, l, i);
                permute_rec(nums, l+1, r, ans);
                swap(nums, l, i);
            }
        }
    }
    vector<vector<int>> permute(vector<int>nums) {
        vector<vector<int>>ans;
        permute_rec(nums, 0, nums.size()-1, ans);
        return ans;
    }
};
