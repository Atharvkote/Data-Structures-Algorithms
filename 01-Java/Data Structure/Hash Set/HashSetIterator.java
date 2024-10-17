import java.util.HashSet;

public class Hashing {
   public static void main(String args[]) {
     
       HashSet<Integer> set = new HashSet<>();
       //Add

       set.add(1);
       set.add(2);
       set.add(3);
       set.add(1);
     //Iteration - HashSet does not have an order

       set.add(0);
     
       Iterator it = set.iterator();// Declaration
     
        while (it.hasNext()) {
          
         System.out.print(it.next() + ", ");
       }
       System.out.println();
    }
}
