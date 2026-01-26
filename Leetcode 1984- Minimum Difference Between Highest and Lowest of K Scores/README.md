# Minimum Difference Between Highest and Lowest Scores
Link: https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores?envType=daily-question&envId=2026-01-26

Level: Easy

## 🧠 Problem Statement
You are given an array `nums` where `nums[i]` represents the score of the i-th student.
You are also given an integer `k`.

Select scores of any `k` students such that the difference between the highest and
lowest score among them is minimized.

Return the minimum possible difference.

---

## 💡 Approach

1. If `k == 1`, the difference is always `0` because only one student is selected.
2. Sort the array of scores.
3. After sorting, the minimum difference will always be found among `k` consecutive
   elements.
4. Use a sliding window of size `k` to calculate the difference.
5. Track the minimum difference across all windows.

---

## ⚙️ Algorithm

- Sort the array.
- Initialize `ans` to a large value.
- Loop through the array and compute the difference for each window of size `k`.
- Return the minimum difference found.

---
