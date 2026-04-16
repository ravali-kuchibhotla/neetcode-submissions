class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char, int>m1;
        map<char, int>m2;
        int m=s1.length();
        int n=s2.length();
        for(int i=0; i<m; i++)
        {
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        for(int j=m; j<n; j++)
        {
            if(m2==m1)
              return true;
            m2[s2[j-m]]--;
            if(m2[s2[j-m]]<=0)
              m2.erase(s2[j-m]);
            m2[s2[j]]++;
        }
        if(m2==m1)
              return true;
        return false;
    }
};
