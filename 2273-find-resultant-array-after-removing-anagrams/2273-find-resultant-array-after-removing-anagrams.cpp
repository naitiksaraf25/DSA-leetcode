class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        ans.push_back(words[0]);
        for (int i = 1; i < words.size(); i++) {
            string copy = words[i];
            string s = copy;
            string x = ans.back();
            sort(s.begin(), s.end());
            sort(x.begin(), x.end());
            if (s != x)
                ans.push_back(copy);
        }
        return ans;
    }
};