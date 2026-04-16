class Solution {
public:
   bool isValid(char a, char b)
    {
        if((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}') )
          return true;
        return false;
    }
    bool isValid(string s) {
        stack<int>st;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
               st.push(s[i]);
            else
            { 
                if(st.empty())
                  return false;
                if(!isValid(st.top(), s[i]))
                   return false;
                st.pop();
            }
        }
        if(st.size())
          return false;
        return true;
    }
};
