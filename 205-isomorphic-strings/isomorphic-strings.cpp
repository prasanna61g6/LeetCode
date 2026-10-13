class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        for(int i = 0; i < n; i++) {
            char ch1 = s[i];
            char ch2 = t[i];
            for(int j = 0; j < n; j++) {
                if(s[j] == ch1 && t[j] != ch2) return false;
                if(s[j] != ch1 && t[j] == ch2) return false;
            }
        }
        return true;
    }
};