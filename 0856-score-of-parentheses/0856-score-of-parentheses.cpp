class Solution {
public:
    int scoreOfParentheses(string s) {
        int total = 0;
        int depth = 0; 
        bool flag = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                depth++;
                flag = 1;
            } else {
                depth--;
                if (flag == 1) {
                    int score = 1;
                    for (int k = 0; k < depth; k++) {
                        score *= 2;
                    }
                    total += score;
                }

                flag = 0;
            }
        }

        return total;
    }
};