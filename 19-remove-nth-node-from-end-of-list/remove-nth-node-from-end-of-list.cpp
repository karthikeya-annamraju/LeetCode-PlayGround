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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while(temp != nullptr) {
            size++;
            temp = temp->next;
        }
        if (size == 1 and n == 1)return NULL;
        if (size == 1 and n == 0)return head;
        if (size == n) {
            head = head->next;
            return head;
        }
        int pos = size - n;
        ListNode* temp1 = head;
        for (int i = 0; i < pos-1; i++) {
            
            temp1 = temp1->next;
        }
        temp1->next = temp1->next->next;
        return head;
    }
};