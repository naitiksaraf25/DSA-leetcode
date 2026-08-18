class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        if (k == n) {
            for (int i = 0; i < n; i++) {
                if (nums[i] > ans)
                    ans = nums[i];
            }
            return ans;
        }
        if (k == 1) {
            for (int i = 0; i < nums.size(); i++) {
                if (mp[nums[i]] == 1) {
                    if (nums[i] > ans)
                        ans = nums[i];
                }
            }
            return ans;
        }

        if (mp[nums[0]] == 1 && mp[nums[n-1]] == 1) {
            return max(nums[0], nums[n-1]);
        }

        if (mp[nums[0]] == 1 && mp[nums[n-1]] > 1) {
            return nums[0];
        }

        if (mp[nums[n-1]] == 1 && mp[nums[0]] > 1) {
            return nums[n-1];
        }
        return -1;
    }
};