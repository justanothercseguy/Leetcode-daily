# Kids With the Greatest Number of Candies

Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies?envType=study-plan-v2&envId=leetcode-75 

Level: Easy  

---

## 📘 Problem Summary

You are given:

- An integer array `candies` where each element represents candies a kid has  
- An integer `extraCandies`  

For each kid, determine whether giving them all the extra candies will make them have **the greatest number of candies among all kids**.

Return a `vector<bool>` where:

- `true` → that kid can reach or exceed the maximum  
- `false` → that kid cannot  

---

## 🧠 Approach

### Step 1 — Find the maximum candies any kid has

Loop through the array and store the maximum value.

### Step 2 — Compare each kid

For every kid:

- Add `extraCandies`  
- If the result is greater than or equal to the maximum → `true`  
- Otherwise → `false`  

Store results in a vector.

---
