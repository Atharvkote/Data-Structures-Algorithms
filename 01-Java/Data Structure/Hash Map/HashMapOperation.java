import java.util.HashMap;
import java.util.HashSet;


public class Hashing {

   public static void main(String args[]) {

       //Creation

       HashMap<String, Integer> map = new HashMap<>();


       //Insertion

       map.put("India", 120);

       map.put("US", 30);

       map.put("China", 150);


       System.out.println(map);


       map.put("China", 180);

       System.out.println(map);



       //Searching

       if(map.containsKey("Indonesia")) {

           System.out.println("key is present in the map");

       } else {

           System.out.println("key is not present in the map");

       }


       System.out.println(map.get("China")); //key exists

       System.out.println(map.get("Indonesia")); //key doesn't exist

       //Removing

       map.remove("China");

       System.out.println(map);
   }

}
