import java.util.*;

public class Calculator {

	public static int add(int a, int b) {
		int sum = a + b;
		return a + b;
	}
	public static int sub(int a, int b) {
		int diff = a - b;
		return a - b;
	}
	public static int mul(int a, int b) {
		int mul = a * b;
		return a * b;
	}
	public static float div(int a, int b) {
		float div = a / b;
		return a / b;
	}
}
public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println(" Operation Menu\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nChoose Any One :");
	int m = sc.nextInt();
	switch (m) {
	case 1:
		System.out.println("Enter 1st Number");
		int a = sc.nextInt();
		System.out.println("Enter 2nd Number");
		int b = sc.nextInt();
		int sum = add(a, b);
		System.out.print("Addition Of Given Numbers is :" + sum);
		break;

	case 2 :
		System.out.println("Enter 1st Number");
		a = sc.nextInt();
		System.out.println("Enter 2nd Number");
		b = sc.nextInt();
		int diff = sub(a, b);
		System.out.print("Substraction Of Given Numbers is :" + diff);
		break;
	case 3 :
		System.out.println("Enter 1st Number");
		a = sc.nextInt();
		System.out.println("Enter 2nd Number");
		b = sc.nextInt();
		int mul = mul(a, b);
		System.out.print("Multiplication Of Given Numbers is :" + mul);
		break;
	case 4 :
		System.out.println("Enter 1st Number");
		a = sc.nextInt();
		System.out.println("Enter 2nd Number");
		b = sc.nextInt();
		float div = div(a, b);
		System.out.print("Division Of Given Numbers is :" + div);
		break;
	}
}
}





