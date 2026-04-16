class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        stack<int>as;
        vector<int>ans;
        int n=temperatures.size();
        for(int i=n-1; i>=0; i--)
          s.push(temperatures[i]);
        for(int i=0; i<n; i++)
        {
            int curr=s.top();
            s.pop();
            int count=1;
            while(s.empty()==false and s.top()<= curr)
            {
                as.push(s.top());
                s.pop();
                count++;
            }
            if(s.empty()==false)
               ans.push_back(count);
            else
              ans.push_back(0);
            while(as.empty()!=true)
            {
                s.push(as.top());
                as.pop();
            }
        }
        return ans;
    }
};
