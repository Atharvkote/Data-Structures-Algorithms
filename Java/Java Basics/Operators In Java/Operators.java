import java.util.*;

/*Types of operators 
    1. Arithmatic Operators (Binary/Unary/Ternary)
    2. Relational Operators
    3. Logical Operators
    4. Bitwise Operators
    5. Assignment Operators */

public class Operators {
    public static void main(String args[]) {
      
        //Binary Operators(2 Operands)
        // [+,-.*,/,%]
        int A =10;
        int B = 5;
        System.out.println("Addition ="+(A + B));
        System.out.println("Substraction =" +(A - B));
        System.out.println("Multiplication ="+A * B);
        System.out.println("Division ="+A / B);
        System.out.println("Remainder(Division)=" + A % B);
      
        //Unary Operators (only one operand)
        //Increment Operator : pre-increment ++a,post-increment a++ Decrement Operator : pre-decrement --a, post-decrement a--
        //In Pre-Increment or Decreament 1. Value Changes first 2. Then Value is used.
        //In Post-Increament or Decreament 1. Value is used first 2. then Value is Changed.
        int a = 10;
        int b = ++a;
        System.out.println(a);
        System.out.println(b);
        a = 10;
        b = a++;
        System.out.println(a);
        System.out.println(b);
        a = 10;
        b = --a;
        System.out.println(a);  //9
        System.out.println(b); //9
        a = 10;
        b = a--;
        System.out.println(a); //9
        System.out.println(b); //10

        // Relational Operators [==,!=,>,<,>=,<=]
        A = 10;
        B = 5;
        System.out.println(A == B);// False
        System.out.println(A != B);// True
        // Logical Operators [&& (T&&T=T), ||(T||F =T) , !]
      
        System.out.println(A < B && B == A);
        System.out.println(A > B || B == A);
        System.out.println(!(B == A));

      
        //Assignment Operators [=,+=,-=,*=,/=]
        A = A + 5;
        System.out.println(A);
        // Both are same.
        A += 5; // Short- Hands Operators
        System.out.println(A);
        //Operator precedence determines the order in which the operators in an expression are evaluated.
        int x = 3 * 4 - 1;
        System.out.println(x);
      
        //Operator Precedence Table
        /* Operators 
          1. Post-fix increament and decreament  (++,--)
          2. prefix increment and decrement, and unary (++,--,+,-,~,!)
          3. multiplicative (*,/,%)
          4. additive (+,-)
          5. shift (<<,>>,>>>)
          6. relational (<,>,<=,>=,instanceof)
          7. equality (==,!=)
          8. bitwise AND(&)
          9. bitwise exclusive OR(^)
          10.bitwise inclusive OR(|)
          11.logical AND (&&)
          12.logical OR (||)
          13.ternary (?:)
          14. Assignment (=,+=,-=,*=,/=,%=,&=,^=,|=,<<=,>>=,>>>=)
          If  an expression has two operators with similar precedence, the expression is evaluated according to its associativity.
          prefix increment and decrement, and unary (Right to left)
          ternary (Right to left)
          assignment (Right to left)  
        */
        // Example :
        int x = 2;
        int y = 5;
        System.out.println(x * (y/x));
       // Output: 2 *(5/2) ---> 2*(2) ----->(4) 
    }
    
}
