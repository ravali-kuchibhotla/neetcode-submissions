class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        map<char, int> m;
        for(int i=0; i<s.length(); i++)
           m[s[i]]=-1;
        int i=0;
        int j=0;
        while(j<s.length())
        {
            if(m[s[j]]==-1 || m[s[j]] < i)
            {
                m[s[j]]=j;
                ans=max(ans, j-i+1);
                j++;
            }
            else
            {
                i=max(i,m[s[j]]+1);
                m[s[j]]=j;
                j++;
            }
        }
        return ans;
    }
};
