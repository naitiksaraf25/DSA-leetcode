class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>count(128,-1);
        int ans =0;
        int alpha=0;
        for(int i=0;i<s.size();i++)
        {
            if(count[s[i]]>=alpha)
            {
                alpha = count[s[i]]+1;
            }
            count[s[i]]=i;
            ans = max(ans,i-alpha+1);
        }
        return ans;
    }
};