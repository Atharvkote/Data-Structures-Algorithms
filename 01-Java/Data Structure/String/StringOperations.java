public class StringOperationsDemo {
    public static void main(String[] args) {
        String str = "Hello World";

        // charAt(int index)
        char ch = str.charAt(6); // 'W'
        System.out.println("Character at index 6: " + ch);

        // length()
        int len = str.length(); // 11
        System.out.println("Length of the string: " + len);

        // substring(int beginIndex)
        String sub1 = str.substring(6); // "World"
        System.out.println("Substring from index 6: " + sub1);

        // substring(int beginIndex, int endIndex)
        String sub2 = str.substring(0, 5); // "Hello"
        System.out.println("Substring from index 0 to 5: " + sub2);

        // toUpperCase()
        String upper = str.toUpperCase(); // "HELLO WORLD"
        System.out.println("Uppercase string: " + upper);

        // toLowerCase()
        String lower = str.toLowerCase(); // "hello world"
        System.out.println("Lowercase string: " + lower);

        // trim()
        String strWithSpaces = "  Hello World  ";
        String trimmed = strWithSpaces.trim(); // "Hello World"
        System.out.println("Trimmed string: " + trimmed);

        // replace(char oldChar, char newChar)
        String replaced = str.replace('o', '0'); // "Hell0 W0rld"
        System.out.println("Replaced 'o' with '0': " + replaced);

        // replace(CharSequence target, CharSequence replacement)
        String replacedSeq = str.replace("World", "Java"); // "Hello Java"
        System.out.println("Replaced 'World' with 'Java': " + replacedSeq);

        // split(String regex)
        String[] parts = str.split(" "); // ["Hello", "World"]
        System.out.println("Split parts:");
        for (String part : parts) {
            System.out.println(part);
        }

        // indexOf(int ch)
        int index1 = str.indexOf('W'); // 6
        System.out.println("Index of 'W': " + index1);

        // indexOf(String str)
        int index2 = str.indexOf("World"); // 6
        System.out.println("Index of 'World': " + index2);

        // lastIndexOf(int ch)
        int lastIndex1 = str.lastIndexOf('o'); // 7
        System.out.println("Last index of 'o': " + lastIndex1);

        // lastIndexOf(String str)
        int lastIndex2 = str.lastIndexOf("World"); // 6
        System.out.println("Last index of 'World': " + lastIndex2);

        // startsWith(String prefix)
        boolean starts = str.startsWith("Hello"); // true
        System.out.println("Starts with 'Hello': " + starts);

        // endsWith(String suffix)
        boolean ends = str.endsWith("World"); // true
        System.out.println("Ends with 'World': " + ends);

        // contains(CharSequence sequence)
        boolean contains = str.contains("World"); // true
        System.out.println("Contains 'World': " + contains);

        // valueOf(Object obj)
        int num = 123;
        String numStr = String.valueOf(num); // "123"
        System.out.println("String representation of 123: " + numStr);
    }
}
