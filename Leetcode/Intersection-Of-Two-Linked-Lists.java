/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public int getNodeCount(ListNode head){
        int ans = 0;
        while(head != null){
            ans++;
            head = head.next;
        }
        return ans;
    }
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int countA = getNodeCount(headA);
        int countB = getNodeCount(headB);
        int diff = 0;
        if(countA > countB){
            diff = countA - countB;
            while(diff-- > 0){
                headA = headA.next;
            }
        }
        else{
            diff = countB - countA;
            while(diff-- > 0){
                headB = headB.next;
            }
        }
        while(headA != headB){
            headA = headA.next;
            headB = headB.next;
        }
        return headA;
    }
}