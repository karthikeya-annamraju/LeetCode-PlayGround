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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == nullptr || head->next == nullptr)return head;
        ListNode* temp = head;
        while (temp != nullptr and temp->next != nullptr) {
            int gcd = __gcd(temp->val, temp->next->val);
            ListNode* insert = new ListNode(0);
            insert->val = gcd;
            //traversing linked list
            insert->next = temp->next;
            temp->next = insert;
            temp = temp->next->next;
        }
        return head;
    }
};