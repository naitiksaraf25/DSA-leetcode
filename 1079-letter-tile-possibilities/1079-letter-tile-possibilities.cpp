class Solution {
public:
    int solve(vector<int>&count)
    {
        int total = 0;
        for(int i=0;i<26;i++)
        {
            if(count[i]==0)
                continue;

            total++;
            count[i]--;

            total += solve(count);
            count[i]++;
        }
        return total;
    }
    int numTilePossibilities(string tiles) {
        vector<int>freq(26,0);
        for(int i=0;i<tiles.size();i++)
        {
            freq[tiles[i]-'A']++;
        }
        return solve(freq);
    }
};