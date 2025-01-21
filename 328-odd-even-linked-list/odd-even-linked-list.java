/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode oddEvenList(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }
        ListNode odd = head;
        ListNode even = head.next;
        ListNode evenHead = even;
        while (even != null && even.next != null) {
            // connect the odd nodes
            odd.next = even.next;
            odd = odd.next;

            // connect the even nodes
            even.next = odd.next;
            even = even.next;
        }
        // connect even and odd lists
        odd.next = evenHead;

        return head;
    
    }
}