class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int ans = 0;
        
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                int b = s.top(); s.pop();
                int a = s.top(); s.pop();
                if (tokens[i] == "+") ans = a + b;
                else if (tokens[i] == "-") ans = a - b;
                else if (tokens[i] == "*") ans = a * b;
                else ans = a / b;
                s.push(ans);
            } else {
                s.push(stoi(tokens[i]));
            }
        }
        
        return s.top();
    }
};
