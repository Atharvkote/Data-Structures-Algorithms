import java.util.*;

 // Compiler version JDK 11.0.2

 public class Recursion3
 {
   public static int first=-1;
   public static int last = -1;
   public static void occur(int indx,String str,char currchar){
    if(indx ==str.length()){
      System.out.println("First Occurance :"+first+"\nLast Occurance :"+last);  
      return;
        }
         char element= str.charAt(indx);
     if(element==currchar){
       if(first==-1){
         first=indx;
       }
       else{
         last=indx;
       }
     }
     occur(indx+1,str,currchar);
     
   }
   public static void main(String args[])
   { 
    Scanner sc = new Scanner(System.in);
   System.out.println("Enter Your String");
     String str=sc.nextLine();
     System.out.println ("Enter Your Elements To Check");
    char currchar=sc.next().charAt(0);
    occur(0,str,currchar);
   }
 }
