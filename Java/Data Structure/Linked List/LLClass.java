import java.util.*;

class LL {
   public static void main(String args[]) {
      LinkedList<String> list = new LinkedList<String>();

      list.addFirst("Atharva");
      list.addFirst("name");
      list.addFirst("my");
      System.out.println(list);

     // Add First Operation 
      list.add(2, "is");
      System.out.println(list);
   }
}
