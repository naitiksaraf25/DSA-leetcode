class Solution {
public:
    int solve(int num) {
        int sum = 0;
        while (num > 0) {
            int x = num % 10;
            sum += x * x;

            num /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> st;
        while (n != 1 && st.find(n) == st.end()) {
            st.insert(n);
            n = solve(n);
        }
        if (n == 1)
            return true;
        return false;
    }
};