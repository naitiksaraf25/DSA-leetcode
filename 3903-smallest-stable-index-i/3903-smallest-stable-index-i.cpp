class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int n = nums.size();
        vector<int> pre(n);
        vector<int> suf(n);
        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
            pre[i] = maxi;
        }
        for (int i = n - 1; i >= 0; i--) {
            mini = min(mini, nums[i]);
            suf[i] = mini;
        }
        for (int i = 0; i < n; i++) {
            if (pre[i] - suf[i] <= k) {
                return i;
            }
        }
        return -1;
    }
};