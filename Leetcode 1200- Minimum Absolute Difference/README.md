# Minimum Absolute Difference in an Array
Link: https://leetcode.com/problems/minimum-absolute-difference?envType=daily-question&envId=2026-01-26

Level: Easy

## 🧠 Problem Statement
You are given an array of **distinct integers**.  
Your task is to find **all pairs of elements** that have the **minimum absolute difference** among all possible pairs.

Each pair `[a, b]` must satisfy:
- `a` and `b` are elements from the array
- `a < b`
- `b - a` equals the minimum absolute difference

Return all such pairs in **ascending order**.

---

## 💡 Key Insight
After sorting the array, the **minimum absolute difference can only occur between adjacent elements**.  
There is no need to compare every possible pair.

---

## ⚙️ Approach

1. Sort the input array.
2. Traverse the sorted array and calculate the difference between adjacent elements.
3. Track the minimum difference found so far.
4. Store all pairs whose difference matches the minimum.
5. Clear previously stored pairs if a smaller difference is found.

---
