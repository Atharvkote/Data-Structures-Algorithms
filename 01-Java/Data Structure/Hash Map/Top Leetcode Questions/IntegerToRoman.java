class Solution {
public String intToRoman(int num) {

HashMap<Integer, String>romanValues=new HashMap<>(); 
        romanValues.put(1, "I");
        romanValues.put(4, "IV");
        romanValues.put(5, "V");
        romanValues.put(9, "IX");
        romanValues.put(10, "X");
        romanValues.put(40, "XL");
        romanValues.put(50, "L");
        romanValues.put(90, "XC");
        romanValues.put(100, "C");
        romanValues.put(400, "CD");
        romanValues.put(500, "D");
        romanValues.put(900, "CM");
        romanValues.put(1000, "M");
  
StringBuilder result =new StringBuilder();
for(int values: new int[] {1000,900,500,400,100,90,50,40,10 ,9,5,4,1})
  {
        while(num >=values) {
           num-=values;
           result.append(map.get(values));
         }
}
return result.toString();
}
  
public static void main(String []args) {
int num =1994;
String roman=integerToRoman(num);
System.out.println(roman);
// Output: "MCMXCIV"
}
  
/*
• Test Case :
----------------------
Input: num = 58      |
Output: "LVIII"      |
----------------------
Input : 3749         |
Output : "MMMDCCXLIX"|
----------------------
Explanation:
3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)
 700 = DCC as 500 (D) + 100 (C) + 100 (C)
  40 = XL as 10 (X) less of 50 (L)
   9 = IX as 1 (I) less of 10 (X)
Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places
*/
