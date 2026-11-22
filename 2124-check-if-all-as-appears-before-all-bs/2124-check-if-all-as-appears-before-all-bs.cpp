class Solution {
public:
    bool checkString(string s) {
        for (int i = 1; i < s.size(); i++) {
            char one = s[i];
            char two = s[i-1];
            if(one == 'a' && two == 'b')return false;
        }
        return true;
    }
};