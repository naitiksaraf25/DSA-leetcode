class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int pro = 1;
        int m = n;
        while(m>0)
        {
            int x = m%10;
            sum += x;
            pro *= x;
            m = m/10;
        }
        int div = sum + pro;
        return (n%div == 0);
    }
};