class Solution {
public:
    set<int>seen;
    void solve(string s, vector<int>& digits, vector<bool>& used) {
        if(s.size() == 3) {
            int n = stoi(s);
            if(n % 2 == 0) {
                seen.insert(n);
            }
            return;
        }

        for(int i = 0; i < digits.size(); i++) {
            if(used[i]) continue;
            if(s.empty() && digits[i] == 0) continue;
            
            used[i] = true;
            s.push_back(digits[i] + '0');
            solve(s, digits, used);
            s.pop_back();
            used[i] = false;
        }
    }
    int totalNumbers(vector<int>& digits) {
        seen.clear();
        vector<bool>used(digits.size(), false);
        solve("", digits, used);
        return seen.size();
    }
};