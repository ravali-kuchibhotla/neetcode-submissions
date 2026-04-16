class Solution {
public:
    bool isPalindrome(string s) {
       if(s.length()==1)
         return true;
        // convert to lower case and onlyalpha numeric in O(1)
        string str;
        for(int i=0; i<s.length(); i++)
        {
            if((s[i]>=47 && s[i]<58) ||(s[i]>=65 && s[i]<90) ||(s[i]>=97 && s[i]<122) )
               str+=tolower(s[i]);
        }
        //check palindrome
        int i=0; int j=str.length()-1;
        while(i<=j)
        {
            if(str[i]!=str[j])
              return false;
            i++;
            j--;
        }
        return true;
    }
};
