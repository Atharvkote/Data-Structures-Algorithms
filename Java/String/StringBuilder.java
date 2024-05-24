/*
String Builder
- Declaration
StringBuilder sb = new StringBuilder("Apna College");
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

import java.util.*;
public class Strings {
   public static void main(String args[]) {
     StringBuilder sb = new StringBuilder("tony");
     //Insert char
     sb.insert(0, 'S');
     System.out.println(sb);
   }
}

// Delete char at some Index

import java.util.*;
public class Strings {
   public static void main(String args[]) {
     StringBuilder sb = new StringBuilder("tony");
     //Insert char
     sb.insert(0, 'S');
     System.out.println(sb);
        //delete char
     sb.delete(0, 1);
     System.out.println(sb);
        }

   }

// Append a char
//Append means to add something at the end.

import java.util.*;
public class Strings {
   public static void main(String args[]) {
     StringBuilder sb = new StringBuilder("Tony");
     sb.append(" Stark");
     System.out.println(sb);
         }

    }

// Print Length of String
import java.util.*;
public class Strings {
   public static void main(String args[]) {
     StringBuilder sb = new StringBuilder("Tony");
     sb.append(" Stark");
     System.out.println(sb);
     System.out.println(sb.length());
       }
}

//Reverse a String (using StringBuilder class)

import java.util.*;
public class Strings {
   public static void main(String args[]) {
     StringBuilder sb = new StringBuilder("HelloWorld");
     for(int i=0; i<sb.length()/2; i++) {
       int front = i;
       int back = sb.length() - i - 1;
       char frontChar = sb.charAt(front);
       char backChar = sb.charAt(back);
       sb.setCharAt(front, backChar);
       sb.setCharAt(back, frontChar);
          }
     System.out.println(sb);
   }
}
