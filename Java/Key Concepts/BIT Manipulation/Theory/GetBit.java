public class BitOperations {
    //Get ith Bit
    public static int getIthBit(int n, int i) {
        int bitMask = 1<<i;
        return (n & bitMask) == 0 ? 0 : 1;
    }
}
