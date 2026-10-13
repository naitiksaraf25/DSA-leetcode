class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>count(n);
        for(int i=0;i<n;i++)
        {
            count[i]= nums[i]*nums[i];
        }
        sort(count.begin(),count.end());
        long long ans = 0;
        int k = n/2;
        for(int i=0;i<k;i++)
        {
            ans -= count[i];
        }
        for(int i=k;i<n;i++)
        {
            ans+=count[i];
        }
        return ans;
    }
};
