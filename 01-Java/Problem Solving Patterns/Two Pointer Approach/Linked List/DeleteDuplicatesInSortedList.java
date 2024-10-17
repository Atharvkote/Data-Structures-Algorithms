class ListNode {
    // Definition for singly-linked list
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}

public class Main {
  class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null || head.next == null) return head;

        ListNode dummy = new ListNode(0); // Create a dummy node to handle edge cases
        dummy.next = head;
        ListNode L = dummy; // `L` is the last node in the list without duplicates
        ListNode R = head; // `R` is the iterator

        while (R != null) {
            boolean flag = false;

            // Move R to the last node of duplicates
            while (R.next != null && R.val == R.next.val) {
                R = R.next;
                flag = true; // Duplicate found
            }

            if (flag) {
                // Skip all duplicates
                L.next = R.next;
            } else {
                // No duplicates, move L to the next node
                L = L.next;
            }

            // Move R to the next node
            R = R.next;
        }

        return dummy.next; // Return the updated list starting from dummy's next node
    }
  }
    public static void main(String[] args) {
        // Create a linked list: 1 -> 2 -> 3 -> 3 -> 4 -> 4 -> 5
        ListNode head = new ListNode(1);
        head.next = new ListNode(2);
        head.next.next = new ListNode(3);
        head.next.next.next = new ListNode(3);
        head.next.next.next.next = new ListNode(4);
        head.next.next.next.next.next = new ListNode(4);
        head.next.next.next.next.next.next = new ListNode(5);

        // Create an instance of the Solution class
        Solution solution = new Solution();

        // Call the deleteDuplicates method
        ListNode newHead = solution.deleteDuplicates(head);

        // Print the results
        System.out.print("List after removing duplicates: ");
        printList(newHead);
    }

    // Helper method to print the linked list
    public static void printList(ListNode head) {
        ListNode current = head;
        while (current != null) {
            System.out.print(current.val + " ");
            current = current.next;
        }
        System.out.println();
    }
}


