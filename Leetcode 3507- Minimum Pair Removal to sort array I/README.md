# Minimum Pair Removal to Make Array Non-Decreasing

🔗 **Problem Link:** https://leetcode.com/problems/minimum-pair-removal-to-sort-array-i?envType=daily-question&envId=2026-01-22

🧩 **Difficulty:** Easy

💻 **Language:** C++

---

## 📌 Problem Summary

Given an integer array `nums`, repeatedly merge the **adjacent pair with the minimum sum** (choose the leftmost if there is a tie).  
Each merge replaces the pair with their sum.

Return the **minimum number of operations** required to make the array **non-decreasing**.

---

## 🧠 Key Observations

- The choice of pair is **forced**, so this is a simulation problem- 'Do the operations exactly as described'.
- Each operation reduces the array size by **1**  
- If the array is already non-decreasing, the answer is **0**  
- Small constraints allow direct simulation  

---

## 🛠️ Approach

- While the array is not non-decreasing:
  - Find the **leftmost adjacent pair with the minimum sum**
  - Replace the pair with their sum
  - Reduce the array size
- Count each merge as one operation  

---
