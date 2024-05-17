class LL{
public void reverseList() {
       if(head == null || head.next == null) {
           return;
       }
       Node prevNode = head;
       Node currNode = head.next;
       while(currNode != null) {
           Node nextNode = currNode.next;
           currNode.next = prevNode;
           prevNode = currNode;
           currNode = nextNode;
       }
       head.next = null;
       head = prevNode;
}
public static void main(String args[]) {
       LL list = new LL();
       list.addLast(1);
       list.addLast(2);
       list.addLast(3);
       list.printList();
       list.reverseList();
       list.printList();
}
