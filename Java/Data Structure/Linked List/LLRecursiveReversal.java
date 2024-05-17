class LL{
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
public static void main(String args[]) {
       LL list = new LL();
       list.addLast(1);
       list.addLast(2);
       list.addLast(3);
       list.printList();
       list.reverseListRecursive();
       list.printList();
 
     }
}
