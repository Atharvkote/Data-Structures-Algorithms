class SetBits{
//Set ith Bit
    public static int setIthBit(int n, int i) {
        int bitMask = 1<<i;
        return n | bitMask;
    }

//Count number of set bits
    public static int countSetBits(int n) {
        int setBits = 0;
        int bitMask = 1;
        while(n != 0) {
            if((n & bitMask) != 0) { //last bit is 1
                setBits++;
            }
            n = n>>1;
        }
        return setBits;
    }

    //a faster method to count set bits
    public static int countSetBits2(int n) {
        int setBits = 0;
        while(n>0) {
            // removes the last set bit from curr number
            n = n & (n-1); 
            setBits++;
        }
        return setBits;
    }
    public static void main(String args[]) {
       System.out.println(countSetBits(9));  
    }
}
