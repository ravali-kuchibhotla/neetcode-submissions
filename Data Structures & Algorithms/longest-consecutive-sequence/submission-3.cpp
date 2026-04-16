class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
          return 0;
        if(nums.size()==1)
          return 1;
        set<int>s;
        for(int i=0; i<nums.size(); i++)
          s.insert(nums[i]);
        int ans=1;
        int count=1;
        auto it=s.begin();
        it++;
        for( ; it!=s.end(); it++)
        {
            if(*it==*prev(it)+1)
            {
              count++;
              ans=max(ans, count);
            }
            else
              count=1;
        }
        return ans;
    }
};
