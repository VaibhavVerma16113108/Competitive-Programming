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
    public int getCount(ListNode head){
        int cnt = 0;
        while(head != null){
            cnt++;
            head = head.next;
        }
        return cnt;
    }
    public ListNode swapNodes(ListNode head, int k) {
        int length = getCount(head);
        ListNode first = head, last = head;
        for(int i = 1; i < k; i++) first = first.next;
        for(int i = 0; i < length - k; i++) last = last.next;
        int temp = first.val;
        first.val = last.val;
        last.val = temp;
        
        return head;
    }
}