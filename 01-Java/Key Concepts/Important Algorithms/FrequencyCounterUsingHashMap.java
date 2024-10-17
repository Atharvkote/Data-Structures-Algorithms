public class FrequencyCounter {  
    public static void main(String[] args) {
      int[] array = {3,2,1,2,4,1,3,4,3,2}
      // Print Frequency  for each Element: 
      Map< Integer,Integer >map = new HashMap<Integer,Integer>();
      // Method-1 :
      for(int num : array){
        if(map.containsKey(num)){
          map.put(num,map.get(num)+1);
        }else{
          map.put(num,1);
        }
      }

      //Method-2 
      for(int num : array){
        map.put(num,map.getOrDefault(num,0)+1);
      }

      /* Output will be same :
      map={
      3 : 3 ,
      2 : 3 ,
      1 : 2 ,
      4 : 2 ,
      }
      */
    }
}
