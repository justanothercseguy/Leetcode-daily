# 🔢 Minimum Bitwise Array

🔗 **Problem Link:**  
https://leetcode.com/problems/construct-the-minimum-bitwise-array-i?envType=daily-question&envId=2026-01-20

🧩 **Difficulty:** Easy  
💻 **Language:** C++

---

## 📌 Problem Summary

You are given an array `nums` containing prime numbers.

For each index `i`, find the **minimum integer `ans[i]`** such that:

ans[i] | (ans[i] + 1) = nums[i]

If no such value exists, store `-1`.

---

## 🧠 Key Observations

- Bitwise OR works on binary digits
- `x` and `x + 1` differ only in the **last few bits**
- **Even numbers (ending with 0 in binary)** usually cannot be formed
- **Odd numbers (ending with 1 in binary)** are more likely to work
- We must choose the **smallest valid `x`**

---

## 🛠️ Approach

- For each number `n` in `nums`:
  - Try values of `x` from `0` onwards
  - Check if `x | (x + 1) == n`
  - The **first valid `x`** is the minimum answer
- If no value satisfies the condition, return `-1`
