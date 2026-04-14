# CSc220-Leetcode-Quiz
4/14/26 Quiz #3

# Sorting Quiz

This repository contains my solutions for two linear-time sorting problems from our CSC 22000-P Algorithms sorting challenge. The objective was to solve both problems without using the library sort function and to explain how each solution achieves efficient runtime.

## Problem 1: Sort Colors (LeetCode #75)

### Algorithm Used
**Counting Sort**

### Explanation
The array only contains three possible values: `0`, `1`, and `2`. Because the range is so small, I count how many times each number appears and then rebuild the array in sorted order.

### Steps
1. Create a count array of size 3
2. Count how many `0`s, `1`s, and `2`s are in the input
3. Overwrite the original array using those counts

### Complexity
- **Time:** O(n)
- **Space:** O(1)

---

## Problem 2: Maximum Gap (LeetCode #164)

### Algorithm Used
**Bucket Sort**

### Explanation
The problem requires linear time, so using a normal sort is not allowed. Instead, I divide the number range into buckets. Each bucket keeps track of only its minimum and maximum value.

The maximum gap must appear between two non-empty buckets, so after filling the buckets, I scan through them and compare the minimum of the current bucket with the maximum of the previous non-empty bucket.

### Steps
1. Find the minimum and maximum values in the array
2. Compute bucket size and number of buckets
3. Place each number into its correct bucket
4. Track each bucket’s minimum and maximum
5. Scan buckets to find the largest gap

### Complexity
- **Time:** O(n)
- **Space:** O(n)

---

## What I Learned
This challenge helped me understand when linear-time sorting methods are useful. Counting Sort works well when the value range is very small, while Bucket Sort is useful when we want to organize values by range and avoid full sorting.

## Course Context
These problems were part of a class activity focused on applying **Counting Sort** and **Bucket Sort** to real interview-style LeetCode questions and explaining the logic clearly in a short demo.
