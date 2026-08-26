class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int count = 0;
            string curr = "";
            for (int j = i; j < n; j++) {
                curr += s[j];
                if (s[j] == '1')
                    count++;

                if (count > k)
                    break;

                if (count == k) {
                    if (ans == "" || curr.size() < ans.size() ||
                        (curr.size() == ans.size() && curr < ans)) {
                        ans = curr;
                    }
                }
            }
        }
        return ans;
    }
};