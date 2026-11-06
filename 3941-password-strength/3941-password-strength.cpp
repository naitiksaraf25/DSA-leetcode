class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char, int> mp;
        int ans = 0;
        for (char x : password) {
            if (x >= 'a' && x <= 'z') {
                if (mp.find(x) == mp.end()) {
                    mp[x]++;
                    ans += 1;
                }
            }
            if (x >= 'A' && x <= 'Z') {
                if (mp.find(x) == mp.end()) {
                    mp[x]++;
                    ans += 2;
                }
            }
            if (x >= '0' && x <= '9') {
                if (mp.find(x) == mp.end()) {
                    mp[x]++;
                    ans += 3;
                }
            } else {
                if (mp.find(x) == mp.end()) {
                    mp[x]++;
                    ans += 5;
                }
            }
        }
        return ans;
    }
};