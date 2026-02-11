# 🔀 Shuffle the Array 
Link: https://leetcode.com/problems/shuffle-the-array?envType=problem-list-v2&envId=dsa-linear-shoal-array-i

Level: Easy

---

## 🧠 Idea

The first half contains all `x` elements and the second half contains all `y` elements.

We iterate from `0` to `n-1` and:

- Take one element from the first half → `nums[i]`
- Take one element from the second half → `nums[i + n]`

---
