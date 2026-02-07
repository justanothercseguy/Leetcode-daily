## Product of Array Except Self —

Link: https://leetcode.com/problems/product-of-array-except-self?envType=study-plan-v2&envId=leetcode-75

Level: Medium 

---

## Problem Statement

Given an integer array nums, return an array answer such that:

answer[i] = product of all elements of nums except nums[i]

Conditions

- Do not use division  
- Time complexity must be O(n)  
- Each prefix and suffix product fits in 32-bit integer  

---

## Approach (Prefix + Suffix Product)

We calculate:
- Left product for each index  
- Right product for each index  
- Multiply them to get the final answer  

This avoids division and runs in linear time.
