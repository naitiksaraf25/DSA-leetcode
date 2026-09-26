class Solution {
public:
    int solve(int num) {
        int ans = 0;
        while (num > 0) {
            int x = num % 10;
            ans = (ans * 10) + x;
            num = num / 10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> st;
        st.reserve(2*nums.size()); // memory allocate ho rhi hai phele se 
        for (int num : nums) {
            st.insert(num);
            st.insert(solve(num));
        }

        return st.size();

        // unordered_map<int, int> mp;
        // vector<int>count;
        // for (int i = 0; i < nums.size(); i++) {
        //     int x = solve(nums[i]);
        //     count.push_back(x);
        // }
        // for(int i=0;i<nums.size();i++)
        // {
        //     mp[nums[i]]++;
        //     mp[count[i]]++;
        // }
        // return mp.size();
    }
};