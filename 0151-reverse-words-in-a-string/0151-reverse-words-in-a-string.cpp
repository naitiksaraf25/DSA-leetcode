class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n = s.length();
        int i = 0;

        while (i < n) {
            while (i < n && s[i] == ' ')
                i++;

            if (i >= n)
                break;

            int j = i;
            while (j < n && s[j] != ' ')
                j++;

            string word = s.substr(i, j - i);
            st.push(word);

            i = j;
        }

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();

            if (!st.empty()) {
                ans += " ";
            }
        }

        return ans;
    }
};