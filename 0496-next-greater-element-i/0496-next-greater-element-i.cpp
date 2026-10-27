class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        reverse(nums1.begin(), nums1.end());
        for (int i = 0; i < nums1.size(); i++) {
            st.push(nums1[i]);
        }
        vector<int> ans(nums1.size(), -1);
        int i = 0;
        while (!st.empty()) {
            for (int j = 0; j < nums2.size(); j++) {
                if (st.top() == nums2[j]) {
                    int a = nums2[j];
                    for (int k = j + 1; k < nums2.size(); k++) {
                        if (a < nums2[k]) {
                            ans[i] = (nums2[k]);

                            break;
                        }
                    }
                }
            }
            st.pop();
            i++;
        }
        return ans;
        // for(int i=0;i<nums2[i];i++)
        // {
        //     for(int j=0;i<nums2.size();j++)
        //     {
        //         if(nums1[i]<nums2[j])
        //         {
        //             st.push(nums2[j]);
        //             break;
        //         }
        //         else
        //         {
        //             st.push(-1);
        //         }
        //     }
        // }
        // vector<int>ans;
        // int i=0;
        // while(!st.empty())
        // {
        //     ans[i]=st.top();
        //     st.pop();
        //     i++;
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
    }
};