import java.util.ArrayList;

public class Maze {
    public static void main(String[] args) {
        System.out.println(count(3, 3));
  // Count Number of path possible to reach a your destination.
        path("",3,3);
// Print the path possible 'D' for down and 'R' right because we can go in two direction only.
        System.out.println(pathRet("", 3, 3));
 // Print or returning in form of ArrayList.
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
        
     static ArrayList<String> pathRet(String p, int r, int c) {
        if (r == 1 && c == 1) {
            ArrayList<String> list = new ArrayList<>();
            list.add(p);
            return list;
        }

        ArrayList<String> list = new ArrayList<>();

        if (r > 1) {
            list.addAll(pathRet(p + 'D', r-1, c));
        }

        if (c > 1) {
            list.addAll(pathRet(p + 'R', r, c-1));
        }

        return list;
         }
/*
Output  :
1.Number of Path :  6
2. Possible Paths :
DDRR
DRDR
DRRD
RDDR
RDRD
RRDD
3.Possible Path in ArrayList: 
[DDRR, DRDR, DRRD, RDDR, RDRD, RRDD]
*/
    }
