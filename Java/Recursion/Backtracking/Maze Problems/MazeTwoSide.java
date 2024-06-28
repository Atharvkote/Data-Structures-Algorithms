import java.util.ArrayList;

public class Maze {
    public static void main(String[] args) {
        System.out.println(count(3, 3));
  // Count Number of path possible to reach a your destination.
        path("",3,3);
// Print the path possible 'D' for down and 'R' right because we can go in two direction only.
    }

    static int count(int r, int c) {
        if (r == 1 || c == 1) {
            return 1;
        }
        int left = count(r-1, c);
        int right = count(r, c-1);
        return left + right;
    }

    static void path(String p, int r, int c) {
        if (r == 1 && c == 1) {
            System.out.println(p);
            return;
        }

        if (r > 1) {
            path(p + 'D', r-1, c);
        }

        if (c > 1) {
            path(p + 'R', r, c-1);
        }
    }
