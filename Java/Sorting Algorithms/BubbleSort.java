import java.util.*;
public class BubbleSort {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Array size : ");
		int n = sc.nextInt();
		int a[] = new int[n];
		for (int i = 0; i < n; i++) {
			System.out.println("Enter Number at " + i + " th Position : ");
			a[i] = sc.nextInt();
		}
		int temp;
		for (int i = 0 ; i < a.length; i++) {
			for (int j = 0; j < a.length - i - 1; j++) {
				if (a[j] > a[j + 1]) {
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		for (int i = 0 ; i < a.length ; i++) {
			System.out.print(" " + a[i]);
		}
	}
}