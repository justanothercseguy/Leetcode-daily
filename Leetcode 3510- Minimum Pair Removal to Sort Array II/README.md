# Minimum Pair Removal (LeetCode):
Link: https://leetcode.com/problems/minimum-pair-removal-to-sort-array-ii?envType=daily-question&envId=2026-01-23

Level: Hard

⚠️ **Note before reading ahead**

The solution is **not my original implementation**.

I decided **not to push the code itself to GitHub** because:
- the problem turned out to be significantly more complex than expected,
- the final accepted solution required editorial-level techniques,
- and the end result does not truly represent my independent problem-solving style.

However, I **did submit the solution on LeetCode** to maintain my daily streak.

---

## 🧠 About the Problem

The task was to repeatedly:
1. Find the **leftmost adjacent pair with the minimum sum**,
2. Merge that pair into a single element,
3. Count how many such operations are needed until the array becomes **non-decreasing**.

On paper, this looks simple.

In practice, it involves:
- careful simulation,
- strict tie-breaking rules,
- dynamic array updates,
- and handling tricky edge cases (negatives, duplicates, early stopping).

---

## 😵 Why This Problem Was Tough (For Me)

This problem pushed me into an area where:
- brute force solutions fail for large inputs,
- partial optimizations silently give wrong answers,
- and correctness depends on keeping **multiple data structures perfectly in sync**.

I initially tried solving this using:
- doubly linked lists,
- then heaps,
- and finally editorial-style set + linked-index simulation.

Despite multiple iterations, debugging edge cases, made it clear that this was **beyond what I could comfortably derive from scratch** at my current level.

---

## ✅ What I Actually Gained From This

- I learned a lot about:
  - simulation problems,
  - why some greedy shortcuts fail,
  - and why certain problems are better suited to C++ STL than pure C.
- I also wanted to **maintain my LeetCode streak**, which helps me stay consistent.
- I got better at reading and reasoning through **editorial-level solutions**.

---
