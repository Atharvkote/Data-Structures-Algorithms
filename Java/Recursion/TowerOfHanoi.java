import java.util.*;

// Compiler version JDK 11.0.2

public class HanoiTower {
	public static void hanoitower(int i, int n, String S, String H, String D) {
		if (n == i) {
			System.out.println("Transfer Disk No " + i + " From" + S + " To " + D);
			return;
		}
		hanoitower(i + 1, n, S, D, H);
		System.out.println("Tranferr Disk No " + i + " From " + H + " To " + D);
		hanoitower(i + 1, n, H, S, D);
	}
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Number if Disc To Been Transferred");
		int n = sc.nextInt();
		System.out.println("Prodecure");
		hanoitower(1, n, "Source", "Helper", "Destination");
	}
}
