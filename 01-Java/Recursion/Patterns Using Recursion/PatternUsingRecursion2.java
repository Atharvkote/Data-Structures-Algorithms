public class TrianglePattern{
    public static void main(String[] args) {
        
        TrianglePattern(4, 0);
        
        /* Output :
        
        * * * *
        * * *
        * *
        *
        
        */
     }

    static void TrianglePattern(int r, int c) {
        if (r == 0) {
            return;
        }
        
        if (c < r) {
            
            System.out.print("*");
            TrianglePattern(r, c+1);
            
        } else {
            
            System.out.println();
            TrianglePattern(r-1, 0);
            
        }
    }
}