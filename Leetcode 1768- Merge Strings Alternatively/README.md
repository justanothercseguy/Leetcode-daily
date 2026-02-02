# Merge Strings Alternately

Link: https://leetcode.com/problems/merge-strings-alternately?envType=study-plan-v2&envId=leetcode-75

Level: Easy

## 🧠 Problem Statement

You are given two strings `word1` and `word2`.

- Merge the strings by adding letters in alternating order, starting with `word1`
- If one string is longer than the other, append the remaining letters at the end
- Return the merged string

---

## 💡 Approach

- Use a single loop that runs up to the length of the longer string
- At each index:
  - Append a character from `word1` if it exists
  - Append a character from `word2` if it exists
- This ensures correct alternating order and handles unequal lengths cleanly

---
- PS: I was busy with a hackathon but we are so back!
