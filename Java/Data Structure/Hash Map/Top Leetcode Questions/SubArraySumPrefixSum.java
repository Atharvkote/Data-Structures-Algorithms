class Solution {

public int subarraySum(int[] nums, int k) {

Map<Integer, Integer>map=new HashMap<Integer, Integer>();

int ans = 0 ;
int sum = 0 ;

map.put(0,1);

for(int i = 0 ;i<nums.length; i ++){
     sum+=nums[i];
}
if(map.containsKey(sum-k)){
      ans+=map.get(sum-k);
     }
map.put(sum,map.getOrDefault(sum,0)+1);
}
return ans;
      }
}

/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input: nums = [1,1,1], k = 2
Output: 2

Example 2:
Input: nums = [1,2,3], k = 3
Output: 2
*/

