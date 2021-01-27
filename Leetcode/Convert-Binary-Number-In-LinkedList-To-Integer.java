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
    public int getDecimalValue(ListNode head) {
        ArrayList<Integer> num = new ArrayList<>();
        while(head != null){
            num.add(head.val);
            head = head.next;
        }
        int ans = 0, p = (1 << num.size() - 1);
        for(int i: num){
            ans += i * p;
            p/=2;
        }
        return ans;
    }
}