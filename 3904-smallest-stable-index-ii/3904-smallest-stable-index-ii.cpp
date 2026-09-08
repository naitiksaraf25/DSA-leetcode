class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int mini = INT_MAX;

        vector<int> pref(nums.size());
        vector<int> suf(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
            pref[i] = maxi;
        }

        for (int i = nums.size() - 1; i >= 0; i--) {
            mini = min(mini, nums[i]);
            suf[i] = mini;
        }

        for (int i = 0; i < nums.size(); i++) {
            long long x = (long long)pref[i] - suf[i];
            if (x <= k) {
                return i;
            }
        }
        return -1;
    }
};