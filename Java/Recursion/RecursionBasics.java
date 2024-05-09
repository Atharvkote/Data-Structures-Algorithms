import java.util.*;

 // Compiler version JDK 11.0.2

public class Recursion 
 {
   public static void hello(int n){
     if(n==0){
       return;
     }
     System.out.println(n);
     hello(n-1);
   }
   public static void main(String args[])
  {
    int n=10;
    hello(n);
   }
 }
