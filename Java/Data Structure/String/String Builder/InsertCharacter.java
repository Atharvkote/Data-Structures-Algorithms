/*
String Builder
- Declaration
StringBuilder sb = new StringBuilder("Atharva");
     System.out.println(sb);

// Get A Character from Index
StringBuilder sb = new StringBuilder("Tony");
     
//Set Char
System.out.println(sb.charAt(0));
Set a Character at Index
StringBuilder sb = new StringBuilder("Tony");

//Get Char
sb.setCharAt(0, 'P');
System.out.println(sb);

*/

//Insert a Character at Some Index
class StringBuilder{
import java.util.*;
public class Strings {
   public static void main(String args[]) {
     StringBuilder sb = new StringBuilder("tony");
     //Insert char
     sb.insert(0, 'S');
     System.out.println(sb);
   }
}

