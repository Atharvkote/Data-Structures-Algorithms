public class Main {

	public static void MoveAllx(int count, int indx, String str, String Newstr) {

		if (indx == str.length()) {
			for (int i = 0; i < count; i++) {
				Newstr += 'x';
			}
			System.out.println(Newstr);
			return;
		}
		char currchar = str.charAt(indx);

		if (currchar == 'x') {
			count++;
			MoveAllx(count, indx + 1, str, Newstr);
		} else {
			Newstr += currchar;
			MoveAllx(count, indx + 1, str, Newstr);
		}
	}
	public static void main(String[] args) {
		String str = "Axxxtxhxxaxxrxvxxxxa";
		MoveAllx(0, 0, str, "");
	}
}
//1.Time Complexity =O(n+N)(N-number of x) comparatively n>>>>>>>N thus Time Compelxity=O(n)
// Question Based on Recursion.