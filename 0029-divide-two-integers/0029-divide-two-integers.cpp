class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor==1)
        {
            return (dividend);
        }
        if((divisor==-1 && dividend <0) || (divisor ==-1 && dividend>0))
        {
            if(dividend <=INT_MIN)
            return INT_MAX;

            return -(dividend);
        }
        long long count = -1;
        long long div = 0;
        int ans = 0;
        bool neg1 = 0, neg2 = 0;
        if (divisor > 0) {
            divisor = -(divisor);
            neg1 = 1;
        }
        if (dividend > 0) {
            dividend = -(dividend);
            neg2 = 1;
        }
        while (div >= dividend) {
            div = div + divisor;
            count++;
        }
        if ((neg1 == 1 && neg2 == 0) || (neg1 == 0 && neg2 == 1)) {
            count = -(count);
        }
        if (count >= INT_MAX) {
            return INT_MAX;
        } else if (count <= INT_MIN) {
            return INT_MIN;
        } else {
            ans = count;
            return ans;
        }
    }
};