class Solution {
    public ListNode middleNode(ListNode head) {
        // Initialize two pointers, slow and fast, both starting at the head of the list
        ListNode slow = head;
        ListNode fast = head;
        
        // Traverse the list with the two pointers
        // The fast pointer moves two steps at a time, and the slow pointer moves one step at a time
        while (fast != null && fast.next != null) {
            slow = slow.next;        // Move slow pointer one step
            fast = fast.next.next;   // Move fast pointer two steps
        }
        
        // When the fast pointer reaches the end of the list, the slow pointer will be at the middle
        return slow;
    }
}
