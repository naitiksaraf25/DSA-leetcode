/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans;
        vector<int> idx;
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }
        ListNode* prev = head;
        ListNode* temp = head->next;
        ListNode* nex = temp->next;
        int i = 1;

        while (nex != NULL) {

            int x = prev->val;
            int y = nex->val;
            int m = temp->val;
            if (m < x && m < y) {
                idx.push_back(i);
            } else if (m > x && m > y) {
                idx.push_back(i);
            }
            i++;
            prev = prev->next;
            temp = temp->next;
            nex = nex->next;
        }
        if(idx.size()<2)return {-1,-1};

        int mini = INT_MAX;
        int maxi = idx.back()-idx.front();
        for (int i = 0; i < idx.size() - 1; i++) {
            int dis1;
            dis1 = idx[i + 1] - idx[i];
            mini = min(mini, dis1);
        }
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};