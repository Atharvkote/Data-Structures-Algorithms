public class TrianglePattern{
    public static void main(String[] args) {
        
        TrianglePattern(4, 0);
        
        /* Output :
        
        * 
        * * 
        * * * 
        * * * *
        
        */
     }

    static void TrianglePattern(int r, int c) {
        if (r == 0) {
            return;
        }
        
        if (c < r) {
            
            TrianglePattern(r, c+1);
            System.out.print("*");
            
        } else {
            
            TrianglePattern(r-1, 0);
            System.out.println();
            
        }
    }
}