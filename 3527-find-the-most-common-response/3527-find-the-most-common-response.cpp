class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        string ans = "";
        unordered_map<string, int> mp;
        for (int i = 0; i < responses.size(); i++) {
            unordered_map<string, bool> seenInRow;
            for (int j = 0; j < responses[i].size(); j++) {
                if (!seenInRow[responses[i][j]]) {
                    mp[responses[i][j]]++;
                    seenInRow[responses[i][j]] = true;
                }
            }
        }
        int x = 0;
        for (auto it : mp) {
            if (it.second > x) {
                ans = it.first;
                x = it.second;
            } else if (it.second == x) {
                if (it.first < ans) {
                    ans = it.first;
                }
            }
        }
        return ans;
    }
};