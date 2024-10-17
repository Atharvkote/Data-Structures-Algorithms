class Solution {

    // Function to find the data of kth node from
    // the end of a linked list.
    int getKthFromLast(Node head, int k) {
        if (head == null || k <= 0) {
            return -1; // Assuming -1 as an error code, can be adjusted based on requirement
        }

        Node fast = head;
        Node slow = head;
        
        // Move fast k nodes ahead
        for (int i = 0; i < k; i++) {
            if (fast == null) {
                return -1; // k is larger than the length of the list
            }
            fast = fast.next;
        }
        
        // Move both fast and slow pointers until fast reaches the end
        while (fast != null) {
            fast = fast.next;
            slow = slow.next;
        }
        
        // Slow is now at the k-th node from the end
        return slow.data;
    }
}
