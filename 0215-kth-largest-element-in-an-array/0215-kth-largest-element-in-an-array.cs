using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int FindKthLargest(int[] nums, int k) {
        List<int> numsList = nums.ToList();  // Convert array to List
        numsList.Sort((a, b) => b.CompareTo(a));  // Sort in descending order
        return numsList[k - 1];
    }
}
