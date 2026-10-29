class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                mp[nums[i]]++;
            }
        }
        int ans = -1;
        int freq = 0;
        for (auto it : mp) {
            int val = it.first;
            int count = it.second;
            
            if (count > freq) {
                freq = count;
                ans = val;
            } 
            else if (count == freq) {
                if (ans == -1 || val < ans) {
                    ans = val;
                }
            }
        }
        
        return ans;
    }
};