### 17.Letter Combinations of a Phone Number

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
<p align="center ">
<img src="../../../Assests/keypad.png" height=200 width=200>
</p>

#### Example 1:

Input: `digits = "23"`<br>
Output: `["ad","ae","af","bd","be","bf","cd","ce","cf"]`<br>
<br>
#### Example 2:<br>

Input: `digits = ""`<br>
Output: `[]`<br><br>
#### Example 3:``<br>

Input: digits =` "2"`<br>
Output: `["a","b","c"]`<br>
 

Constraints:

`0 <= digits.length <= 4`
`digits[i] is a digit in the range ['2', '9'].`

#### Solution:  

```java
class Solutions {
List<String> result = new ArrayList<>();
    String[] mapping = {
        "",    // 0
        "",    // 1
        "abc", // 2
        "def", // 3
        "ghi", // 4
        "jkl", // 5
        "mno", // 6
        "pqrs",// 7
        "tuv", // 8
        "wxyz" // 9
    };

    public void keypad(String p, String up) {
        if (up.isEmpty()) {
            result.add(p);
            return;
        }

        int digit = up.charAt(0) - '0';
        String letters = mapping[digit];
        for (char ch : letters.toCharArray()) {
            keypad(p + ch, up.substring(1));
        }
    }
}
```
