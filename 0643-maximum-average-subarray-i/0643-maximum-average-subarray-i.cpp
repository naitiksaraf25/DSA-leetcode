class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        double sum = 0;
        int count = 0;
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            count++;
            if (count == k) {
                double p = sum;
                p = p / k;
                ans = max(ans, p);
                sum -= nums[j];
                j++;
                count--;
            }
        }
        return ans;
    }
};