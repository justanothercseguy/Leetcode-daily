# 📐 Maximum Side Length of a Square

🔗 **Problem Link:** https://leetcode.com/problems/maximum-side-length-of-a-square-with-sum-less-than-or-equal-to-threshold?envType=daily-question&envId=2026-01-19 
🧩 **Difficulty:** Medium  
💻 **Language:** C++

---

## 📌 Problem Summary
- Given an `m × n` matrix and an integer `threshold`
- Find the **largest square side length `k`**
- The sum of elements inside the `k × k` square must be **≤ threshold**
- Return `0` if no such square exists

---

## 🧠 Key Observations
- Square size ranges from `1` to `min(m, n)`
- Larger squares have **larger sums**
- If a size `k` is valid, all smaller sizes are also valid
- This monotonic behavior allows **binary search**

---

## 🛠️ Approach
- Build a **2D prefix sum** matrix for fast square sum calculation
- Binary search on possible **square sizes**
- For each size `k`:
  - Check all `k × k` squares using prefix sum
  - If any square has sum `≤ threshold`, size `k` is valid
- Update the maximum valid size

---
