# 🌱 Can Place Flowers
Link: https://leetcode.com/problems/can-place-flowers?envType=study-plan-v2&envId=leetcode-75

Level: Easy

---

## 📘 Problem Statement

You are given:

- An integer array `flowerbed` consisting of:
  - `0` → empty plot  
  - `1` → already planted flower  
- An integer `n` representing how many new flowers you want to plant  

### ❗ Rule:
No two flowers can be planted next to each other.

---

## ✅ Goal

Return:

- `true` if `n` flowers can be planted safely  
- `false` otherwise  

---

## 💡 Approach:

We scan the flowerbed from left to right.

At each position, we plant a flower only if:

- The current plot is empty  
- The left plot is empty or doesn’t exist  
- The right plot is empty or doesn’t exist  

When we plant:

- Mark the plot as `1`  
- Decrease `n`

Stop early if `n` becomes zero.

---
