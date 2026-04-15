# CSc220-LeetCode-Quiz
4/14/26 Quiz #3

This repository contains solutions for two LeetCode linear-time sorting problems from the CSC 220 Algorithms Quiz #3. The objective was to solve both problems without using the library sort function and to explain how each solution achieves efficient runtime.

## Problem 1: LeetCode #75: Sort Colors

### Algorithm Used
**Counting Sort**

### Explanation
The array only contains three possible values: `0`, `1`, and `2`. Because the range is so small, we count how many times each number appears and then rebuild the array in sorted order.

### Steps
1. Create a count array of size 3
2. Count how many `0`s, `1`s, and `2`s are in the input
3. Overwrite the original array using those counts

### Complexity
- **Time:** O(n)
- **Space:** O(1)

---

## Problem 2: LeetCode #164: Maximum Gap

### Algorithm Used
**Bucket Sort**

### Explanation
The problem requires linear time, so using a normal sort is not allowed. Instead, we divide the number range into buckets. Each bucket keeps track of only its minimum and maximum value.

The maximum gap must appear between two non-empty buckets, so after filling the buckets, we scan through them and compare the minimum of the current bucket with the maximum of the previous non-empty bucket.

### Steps
1. Find the minimum and maximum values in the array
2. Compute bucket size and number of buckets
3. Place each number into its correct bucket
4. Track each bucket’s minimum and maximum
5. Scan buckets to find the largest gap

### Complexity
- **Time:** O(n)
- **Space:** O(n)
