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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, int>mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        // if (mp[head->val] > 0) {
        //     head = head->next;
        // }
        ListNode* temp = head;
        while (temp != nullptr && temp->next != nullptr) {
            if (mp[head->val] > 0) {
            head = head->next;
        }
            if (mp[temp->next->val] == 0) {
                temp=temp->next;
            }
            else {
                temp->next = temp->next->next;
            }
        }
        return head;
    }
};