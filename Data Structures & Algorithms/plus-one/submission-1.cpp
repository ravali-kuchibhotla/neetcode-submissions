class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long int n=0;
        long long int multiplier=1;
        vector<int>ans;
        for(int i=digits.size()-1; i>=0; i--)
        {
            n+=multiplier*digits[i];
            multiplier*=10;
        }
        cout<<n<<" ";
        n+=1;
        while(n>0)
        {
            int x=n%10;
            ans.push_back(x);
            n/=10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
