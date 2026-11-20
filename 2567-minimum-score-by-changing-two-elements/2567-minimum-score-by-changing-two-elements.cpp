class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int opt1 = nums[n-1]-nums[2];
        int opt2 = nums[n-2]-nums[1];
        int opt3 = nums[n-3]-nums[0];

        int ans = min({opt1,opt2,opt3});
        return ans;
    }
};