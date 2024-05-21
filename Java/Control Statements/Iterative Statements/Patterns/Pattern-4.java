public class Patterns {
  public static void floyds_triangle(int n) {
        int number = 1;
        for(int i=1; i<=n; i++) {
            //numbers
            for(int j=1; j<=i; j++) {
                System.out.print(number +" ");
                number++;
            }
            //spaces ...
            System.out.println();
        }
    }
}
