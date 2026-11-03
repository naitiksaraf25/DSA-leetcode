class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = 0;
        for (int x : nums) {
            maxi = max(x, maxi);
        }
        int ans =0;
        for(int i=0;i<nums.size();i++){
            ans+=abs(nums[i]-maxi);
        }    
        return ans;
    }
};