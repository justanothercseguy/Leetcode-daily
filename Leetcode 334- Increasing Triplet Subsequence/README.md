# Increasing Triplet Subsequence
Link: https://leetcode.com/problems/increasing-triplet-subsequence?envType=study-plan-v2&envId=leetcode-75

Level: Medium

## Problem Description

Given an integer array `nums`, determine whether there exists a triplet of indices `(i, j, k)` such that:

i < j < k  
nums[i] < nums[j] < nums[k]

Return `true` if such a triplet exists, otherwise return `false`.

---

## Approach (Greedy Single Pass)

We only need to track two numbers:

- `first` → smallest value seen so far  
- `second` → smallest value greater than `first`  

While iterating:

- Update `first` when a smaller value is found  
- Update `second` when a value greater than `first` but smaller than `second` is found  
- If a number larger than both appears → increasing triplet exists  

---

## Algorithm Steps

1. Initialize `first` and `second` to a very large value (`INT_MAX`)  
2. Traverse the array once  
3. Update `first` or `second` based on current value  
4. If a value larger than both appears, return `true`  
5. If traversal ends, return `false`  

---
