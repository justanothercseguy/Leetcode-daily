# Concatenation of Array
Link: https://leetcode.com/problems/concatenation-of-array?envType=problem-list-v2&envId=dsa-linear-shoal-array-i

Level: Easy

---

## 📌 Problem Statement

Given an integer array `nums` of length `n`, create an array `ans` of length `2n` such that:

- `ans[i] = nums[i]`
- `ans[i + n] = nums[i]`  

for `0 ≤ i < n`.

In other words, concatenate the array with itself.

---

## 🧠 Approach

1. Find the size `n` of the array  
2. Create a new array of size `2n`  
3. Copy each element twice:
   - First at index `i`
   - Second at index `i + n`

---
