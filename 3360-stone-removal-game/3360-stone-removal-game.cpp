class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10)
            return false;

        bool flag = true;
        int x = 10;
        while (x > 0 && n >= x) {
            n = n - x;
            x--;
            flag = !flag;
        }
        return !flag;
    }
};