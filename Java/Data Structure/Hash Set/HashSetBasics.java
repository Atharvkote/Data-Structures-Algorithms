import java.util.HashSet;

public class Hashing {
   public static void main(String args[]) {
     
       HashSet<Integer> set = new HashSet<>();
       //Add

       set.add(1);
       set.add(2);
       set.add(3);
       set.add(1);
     
       //Size
       System.out.println("size of set is : " + set.size());
     
       //Search
       if(set.contains(1)) {
           System.out.println("present");
       }
       if(!set.contains(6)) {
           System.out.println("absent");
       }

       //Delete
       set.remove(1);
       if(!set.contains(1)) {
          System.out.println("absent");
       }

       //Print all elements
       System.out.println(set);
       //isEmpty

       if(!set.isEmpty()) {

           System.out.println("set is not empty");

       }

   }

}


