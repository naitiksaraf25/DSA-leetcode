class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = INT_MAX;
        for(int x:nums)
        {
            mini = min(x,mini);
        }
        long long ans = 0;
        for(int x : nums)
        {
            ans += x-mini;
        }
        return ans;
    }
};