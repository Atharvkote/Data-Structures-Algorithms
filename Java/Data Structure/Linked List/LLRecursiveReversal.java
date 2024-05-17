public Node reverseListRecursive(Node head) {
       //empty node || last node or only one node
       if(head == null || head.next == null) {
           return head;
       }
       Node newHead = reverseListRecursive(head.next);
       head.next.next = head;
       head.next = null;
       return newHead;
   }
