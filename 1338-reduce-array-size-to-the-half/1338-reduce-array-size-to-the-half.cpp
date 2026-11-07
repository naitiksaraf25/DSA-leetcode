class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x : arr)mp[x]++;
        vector<int>freq;
        for(auto it : mp)
        {
            freq.push_back(it.second);
        }
        sort(freq.rbegin(),freq.rend());

        int removed = 0;
        int ans = 0;
        int target = arr.size()/2;

        for(int f: freq)
        {
            removed += f;
            ans++;
            if(removed >=target)
                break;
        }
        return ans;
    }
};