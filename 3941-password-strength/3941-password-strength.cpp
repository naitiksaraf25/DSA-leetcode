class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char, int> mp;
        int ans = 0;
        for (char x : password) {
            if (mp.find(x) == mp.end()) {
                if (x >= 'a' && x <= 'z') {
                    mp[x]++;
                    ans += 1;
                }
                if (x >= 'A' && x <= 'Z') {
                    mp[x]++;
                    ans += 2;
                }
                if (x >= '0' && x <= '9') {
                    mp[x]++;
                    ans += 3;
                } else if (x == '!' || x == '@' || x == '#' || x == '$') {
                    mp[x]++;
                    ans += 5;
                }
            }
        }
        return ans;
    }
};