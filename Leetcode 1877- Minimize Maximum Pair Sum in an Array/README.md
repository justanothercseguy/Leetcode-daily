# Minimize the Maximum Pair Sum

Link: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array?envType=daily-question&envId=2026-01-24

Level: Medium

---

## 🧩 Problem Description

Given an array `nums` of even length `n`, we need to divide the array into `n / 2` pairs such that:

- Each element is used **exactly once**
- For every pair `(a, b)`, the **pair sum** is `a + b`
- Among all pair sums, we consider the **maximum pair sum**
- Our goal is to **minimize this maximum pair sum**

---

## ❗ Why the Description Can Be Confusing

When I first read **“minimum maximum pair sum”**, it felt contradictory —  

### What it actually means:

1. First, form pairs from the array  
2. For each pair, calculate its sum  
3. Among all the pair sums, find the **largest one** (the maximum)  
4. Choose the pairing strategy that makes this **largest sum as small as possible**

So the goal is **not** to minimize every pair sum, but to  
**minimize the worst (maximum) pair sum**.

---

## 🚀 Approach

1. Sort the array in ascending order
2. To minimize the maximum pair sum:

- Pair the **smallest** element with the **largest**
- Pair the second smallest with the second largest, and so on
3. Use two pointers:
   - One starting from the beginning
   - One starting from the end
4. While pairing elements, keep track of the maximum pair sum
5. Return the minimum possible maximum pair sum

---
