class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int maxi = 0;
        for(char ch: s) {
            if(ch == '(') {
                cnt++;
                maxi = max(cnt, maxi);
            }
            if(ch == ')') cnt--;
        }
        return maxi;
    }
};