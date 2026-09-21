class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]<=9){
                ans.push_back(nums[i]);
            }
            else{
                stack<int> s;
                int p=nums[i];
                while(p > 0) {
                    s.push(p % 10);
                    p = p / 10;
                }
                while(s.size() != 0){
                    ans.push_back(s.top());
                    s.pop();
                }
            }
        }
        return ans;
        
    }
};