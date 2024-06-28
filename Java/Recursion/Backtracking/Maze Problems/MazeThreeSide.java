import java.util.ArrayList;

public class Maze {
    public static void main(String[] args) {
      
     System.out.println(pathRetDiagonal("", 3, 3));
      // Print path when you can move in three directions 
      // D - Diagonal 
      // R - Right
      // V - Down
    }
    static ArrayList<String> pathRetDiagonal(String p, int r, int c) {
        if (r == 1 && c == 1) {
            ArrayList<String> list = new ArrayList<>();
            list.add(p);
            return list;
        }

        ArrayList<String> list = new ArrayList<>();

        if (r > 1 && c > 1) {
            list.addAll(pathRetDiagonal(p + 'D', r-1, c-1));
        }

        if (r > 1) {
            list.addAll(pathRetDiagonal(p + 'V', r-1, c));
        }

        if (c > 1) {
            list.addAll(pathRetDiagonal(p + 'H', r, c-1));
        }

        return list;
    }
}
