class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<groupSizes.size();i++)
        {
            int x = groupSizes[i];
            mp[x].push_back(i);
            if(mp[x].size() == x)
            {
                ans.push_back(mp[x]);
                mp[x].clear();
            }
        }
        return ans;
    }
};