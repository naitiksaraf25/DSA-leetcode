class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int curr = 1;
        int prev = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                curr++;
                prev = 1;
            } else if (nums[i] < nums[i - 1]) {
                prev++;
                curr = 1;
            } else { 
                curr = 1;
                prev = 1;
            }
            ans = max(ans, max(curr, prev));
        }
        return ans;
    }
};