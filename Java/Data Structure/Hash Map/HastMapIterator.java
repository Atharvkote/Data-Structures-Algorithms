import java.util.HashMap;//Iteration (1)
import java.util.HashSet;


public class Hashing {

   public static void main(String args[]) {

       //Creation



       for( Map.Entry<String, Integer> e : map.entrySet()) {

           System.out.println(e.getKey());

           System.out.println(e.getValue());

       }


       //Iteration (2)

       Set<String> keys = map.keySet();

       for(String key : keys) {

           System.out.println(key+ " " + map.get(key));

       }
   }
}
