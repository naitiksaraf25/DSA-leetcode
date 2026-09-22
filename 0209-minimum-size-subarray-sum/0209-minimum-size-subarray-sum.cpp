class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini =INT_MAX;
        int left = 0;
        int currSum = 0;
        for(int i=0;i<nums.size();i++)
        {
            currSum += nums[i];
            while(currSum>=target)
            {
                if(i-left+1<mini)
                {
                    mini = i-left+1;
                }
                currSum -= nums[left];
                left++;
            }
        }
        if(mini == INT_MAX)return 0;
        return mini;
    }
};