class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>ans;
       map<map<char, int>, vector<string>> m;
       for(int i=0; i<strs.size(); i++)
       {
           string s=strs[i];
           map<char, int>temp_map;
           for(int j=0; j<s.length(); j++)
             temp_map[s[j]]++;
           m[temp_map].push_back(s);
       }
       for(auto it : m)
         //cout<<it.first<<" ";
         ans.push_back(it.second);
       return ans;
    }
};
