import java.util.*;

class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        // Map to store sorted string as key and list of anagrams as value
        Map<String, List<String>> map = new HashMap<>();
        
        for (String str : strs) {
            // Convert the string to a character array, sort it, and then convert back to a string
            char[] charArray = str.toCharArray();
            Arrays.sort(charArray);
            String sortedStr = new String(charArray);
            
            // If the sorted string is not in the map, add it with an empty list
            if (!map.containsKey(sortedStr)) {
                map.put(sortedStr, new ArrayList<>());
            }
            
            // Add the original string to the list corresponding to the sorted string
            map.get(sortedStr).add(str);
        }
        
        // Collect all the lists from the map and return them as the result
        return new ArrayList<>(map.values());
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        String[] input = {"eat", "tea", "tan", "ate", "nat", "bat"};
        List<List<String>> result = sol.groupAnagrams(input);
        System.out.println(result);
        // output :  [["eat", "tea", "ate"], ["tan", "nat"], ["bat"]]
    }
}
