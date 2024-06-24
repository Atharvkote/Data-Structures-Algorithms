public class NumbersExampleRecursion {
    public static void main(String[] args) {
        // write a function that takes in a number and prints it
        // print first 5 numbers: 1 2 3 4 5

        print(1);
    }

    static void print(int n) {
        // base condition
        if (n == 5) {
            System.out.println(5);
            return;
        }
        System.out.println(n);

        // recursive call
        // if you are calling a function again and again, you can treat it as a separate call in the stack

        // this is called tail recursion
        // this is the last function call
        print(n + 1);
    }
}
// Visualization  of Recursion  Calls :

    public static void main(String[] args) {
        // write a function that takes in a number and prints it
        // print first 5 numbers: 1 2 3 4 5

        print1(1);
    }

    static void print1(int n) {
        System.out.println(n);
        print2(2);
    }

    static void print2(int n) {
        System.out.println(n);
        print3(3);
    }

    static void print3(int n) {
        System.out.println(n);
        print4(4);
    }

    static void print4(int n) {
        System.out.println(n);
        print5(5);
    }

    // func body here changes
    static void print5(int n) {
        System.out.println(n);
    }
    /*   Control  Flow 》 Main 》 Print(1) 》 Print(2) 》 Print(3) 》 Print(4) 》 Print(5) 》 》 》  》 》 》  》  》  》 》
            .End of main 《 End of Print(1) 《  End of Print(2) 《 End of Print(3) 《 End of Print(4) 《 End of Print(5)
      */
}
