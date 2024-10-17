class ClearBits{
//Clear ith Bit
    public static int clearIthBit(int n, int i) {
        int bitMask = ~(1<<i);
        return n & bitMask;
    }

//Clear Last i Bits
    public static int clearLastIbits(int n, int i) {
        int bitMask = (~0)<<i; // or (-1)<<i
        return n | bitMask;
    }

//Clear Bits in Range (i,j)
    public static int clearBitsinRange(int n, int i, int j) {
        int a = ~0<<i;
        int b = (1<<i)-1;
        int bitMask = a | b;
        return n & bitMask;
    }
}
