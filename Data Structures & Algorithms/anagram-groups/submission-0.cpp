class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        for(string s : strs)
        {
            string original_s=s;
            sort(s.begin(), s.end());
            m[s].push_back(original_s);
        }
        for(auto it : m)
          ans.push_back(it.second);
        return ans;
    }
};
