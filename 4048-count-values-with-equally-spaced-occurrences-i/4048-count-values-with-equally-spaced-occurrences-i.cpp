class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (auto it : mp) {
            if (it.second == 3) {
                vector<int> count;
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] == it.first) {
                        count.push_back(i);
                    }
                }
                for (int i = 1; i < count.size() - 1; i++) {
                    if (count[i + 1] - count[i] == count[i] - count[i - 1]) {
                        ans++;
                    } else
                        break;
                }
            }
        }
        return ans;
    }
};