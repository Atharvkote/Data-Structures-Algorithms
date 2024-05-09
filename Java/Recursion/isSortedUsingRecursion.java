import java.util.*;

 class isSorted
 {
   public static boolean issorted(int arr[],int indx){
     if(indx==arr.length-1){
       return true;
     }
     if(arr[indx]<arr[indx+1] ){
      return issorted(arr,indx+1);
     }
     else{
       return false;
     }
   }
   public static void main(String args[]){ 
  System.out.println("Enter Array Size");
    Scanner sc = new Scanner(System.in ); 
   int a=sc.nextInt();
  int[] arr=new int[a]; 
    for(int i=0;i<a;i++){
       System.out.println("Enter Element at "+i+"th "+"position"); 
       arr[i]=sc.nextInt();
    }
    
    System.out.println("Given Array is:");
    System.out.print("{ ");
    for(int i=0;i<a;i++){
      
      System.out.print(" "+arr[i]);
      
    }
    System.out.println(" }");
    
    boolean b=issorted(arr,0);
   if(b==true){
     System.out.println("Array is Sorted");
        }
        else{
          System.out.println("Array is Not Sorted");
        }
  }
  

}