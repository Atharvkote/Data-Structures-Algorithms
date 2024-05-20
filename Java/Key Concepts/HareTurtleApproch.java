class Solution {
    public ListNode middleNode(ListNode head) {
     ListNode turtle = head;
     ListNode hare = head;
        while(hare!= null && hare.next != null)
        {
          turlte = turtle.next;
         hare = hare.next.next;
        }
        return turtle;
    }
}
// use to find middle Node of a Linked List;
