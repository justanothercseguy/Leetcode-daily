# GCD of Strings
Link: https://leetcode.com/problems/greatest-common-divisor-of-strings?envType=study-plan-v2&envId=leetcode-75

Level: Easy

## 📌 Problem Description
Given two strings `str1` and `str2`, find the **greatest common divisor (GCD) string**.

A string `x` is said to be the GCD of `str1` and `str2` if:
- Both strings can be formed by **repeating `x`**
- `x` is the **longest possible** such string

If no such string exists, return an empty string `""`.

---

## 🧠 Intuition
If both strings are made from the same repeating base string, then:
The length of the GCD string is simply the
**GCD of the lengths** of `str1` and `str2`.

The answer is the prefix of length `gcd(len(str1), len(str2))`.

---

## ✅ Approach
1. Compare `str1 + str2` and `str2 + str1`
2. If they are not equal, return `""`
3. Find the GCD of the two string lengths
4. Return the prefix of the string up to the GCD length

---
