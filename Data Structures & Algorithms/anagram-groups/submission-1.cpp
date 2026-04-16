class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> m;
        for(string s : strs)
        {
            vector<int>count(26);
            for(char c : s)
               count[c-'a']++;
            m[count].push_back(s);
        }
        for(auto it : m)
          ans.push_back(it.second);
        return ans;
    }
};
