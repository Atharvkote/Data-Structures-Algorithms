import java.util.*;

public class Strings {
    public static void main( String args[]){
        Scanner sc = new Scanner(System.in);
    StringBuilder sb = new StringBuilder("JaiShriRam JaiShriRam");
    System.out.println("● Length of String is "+sb.length());
        System.out.println("● Substring is "+sb.substring(3,10));
        StringBuilder sbb = new StringBuilder("Hel");
        sbb.append("lo");
        sbb.append("Wor");
        sbb.append("ld....!");
        System.out.println("● Appended String is "+sbb);
        StringBuilder sb2 = new StringBuilder("SaiRam");
        sb2.insert(0,'O');
        sb2.insert(1,'m');
        System.out.println("● Instered String is "+sb2);
        StringBuilder sb3 = new StringBuilder("Athxyva");
        sb3.setCharAt(3,'a');
        sb3.setCharAt(4,'r');
        System.out.println("● CharAt String is "+sb3);
        StringBuilder sb4 = new StringBuilder("AtharvaxxxxKote");
        sb4.delete(7,11);
        sb4.insert(7," ");
        System.out.println("● Deleted String is "+sb4);
        System.out.println("● Reversed String is "+sb3.reverse());
    }  
}