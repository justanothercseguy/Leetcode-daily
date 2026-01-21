# 🔢 Minimum Bitwise Array

🔗 **Problem Link:**  
https://leetcode.com/problems/construct-the-minimum-bitwise-array-ii?envType=daily-question&envId=2026-01-21

🧩 **Difficulty:** Medium  
💻 **Language:** C++

---

## 📌 Problem Summary

You are given an array `nums` consisting of prime numbers.

For each index `i`, find the **minimum integer `ans[i]`** such that:

ans[i] | (ans[i] + 1) = nums[i]

If no such value exists, store `-1`.

---

## 🧠 Key Observations

- The expression `x | (x + 1)` always results in an **odd number**
- Hence, if `nums[i]` is **even**, no valid value of `x` exists
- The problem requires the **minimum possible value**, not just any valid one
- Binary representation plays a key role in forming the correct answer

---

## 🔁 How the Approach Evolved:

### 🔹 Initial Approach (Brute Force)

When first solving the problem, I used a **brute-force approach**:
- Tried all values of `x` from `0` to `nums[i]`
- Checked whether `x | (x + 1) == nums[i]`
- The first valid `x` was taken as the minimum

This approach was **logically correct** and helped in understanding the problem better.

However, when the constraints were considered (`nums[i]` up to `10⁹`), this solution became **too slow** and failed due to time limits.

---

### 🔹 Optimized Approach (Bit Manipulation)

Due to the larger constraints, the approach had to be optimized.

> ⚠️ Bit manipulation was **not a familiar concept for me initially**, so I had to spend time understanding how binary representations and bitwise operations work, with help from online resources.

Key idea behind optimization:
- Only certain binary patterns can satisfy the condition
- For odd numbers, the minimum valid `x` can be obtained by:
  - Looking at the continuous `1`s at the end of the binary representation
  - Removing the **leftmost `1` from this ending group**

This reduces the time complexity from brute force to an efficient solution that works within constraints.

---
