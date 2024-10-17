public class Patterns {
    public static void inverted_halfPyramid_withNumbers(int n) {
        for(int i=1; i<=n; i++) {
            //numbers
            for(int j=1; j<=n-i+1; j++) {
                System.out.print(j);
            }
            //spaces...
            System.out.println();
        }
    }
}
