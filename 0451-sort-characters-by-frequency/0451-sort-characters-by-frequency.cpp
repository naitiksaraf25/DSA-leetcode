class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        string ans = "";
        vector<vector<char>> bucket(s.size() + 1);
        for (auto it : mp) {
            char ch = it.first;
            int freq = it.second;
            bucket[freq].push_back(ch);
        }
        for (int i = s.size(); i > 0; i--) {
            for (char ch : bucket[i]) {
                ans.append(i, ch);
            }
        }
        return ans;
    }
};