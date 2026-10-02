class Solution {
public:
    void fun(int n, string s, int open, int close, vector<string>&ans) {
        if(open == n && close == n) {
            ans.push_back(s);
            return;
        }

        if(open < n) {
            s.push_back('(');
            fun(n, s, open+1, close, ans);
            s.pop_back();
        }

        if(open > close) {
            s.push_back(')');
            fun(n, s, open, close+1, ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s;
        int open = 0;
        int close = 0;
        fun(n, s, open, close, ans);
        return ans;
    }
};