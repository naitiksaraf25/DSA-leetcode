class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> count;
        for (auto it : mp) {
            count.push_back({it.second, it.first});
        }
        sort(count.begin(), count.end());
        int n = count.size();
        for (int i = n - 1; i >= n - k; i--) {
            ans.push_back(count[i].second);
        }
        return ans;
    }
};