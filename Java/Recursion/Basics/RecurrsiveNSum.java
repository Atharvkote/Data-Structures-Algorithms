public class RecursionBasics {

    public static int calcSum(int n) {
        if(n == 1) {
            return 1;
        }
        int Sum = calcSum(n-1);
        int Sn = n + Sum;
        return Sn;
    }
}
