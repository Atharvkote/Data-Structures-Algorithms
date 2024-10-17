public class Patterns {
public static void zero_one_triangle(int n) {
        for(int i=1; i<=n; i++) {
            //binary bits
            for(int j=1; j<=i; j++) {
                if((i+j) % 2 == 0) { //even
                    System.out.print("1");
                } else { //odd
                    System.out.print("0");
                }
            }
            System.out.println();
        }
    }
}
