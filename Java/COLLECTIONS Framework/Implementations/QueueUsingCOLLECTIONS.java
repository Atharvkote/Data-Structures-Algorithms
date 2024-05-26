//queue using Java Collection Framework
import java.util.*;
public class QueueB {
   public static void main(String args[]) {
       //Queue<Integer> q = new LinkedList();
       Queue<Integer> q = new ArrayDeque();
       q.add(1);
       q.add(2);
       q.add(3);
       q.add(4);
       q.add(5);
       while(!q.isEmpty()) {
           System.out.println(q.peek());
           q.remove();
       }
   }
}
/*
Note :
1. Queue is A Interface Which is Implemented using the classes like Linked List of ArrayDeque
2. Therefore in Line Number 6 we created of object of reference to Queue(interface)
3. And Object is Created of classes Linked List/ArrayDeque 
*/
