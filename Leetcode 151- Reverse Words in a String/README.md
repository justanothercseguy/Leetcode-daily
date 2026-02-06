# Reverse Words in a String (C++)
Link: https://leetcode.com/problems/reverse-words-in-a-string?envType=study-plan-v2&envId=leetcode-75

Level: Easy

## 📌 Problem Statement

Given an input string `s`, reverse the order of the words.

A word is defined as a sequence of non-space characters.  
The words in `s` may have:

- Leading spaces  
- Trailing spaces  
- Multiple spaces between words  

The output must:

- Contain words in reverse order  
- Have only one space between words  
- Have no leading or trailing spaces  

---

## 💡 Approach (C++ Logic)

1. Traverse the string character by character  
2. Build each word manually (ignore spaces)  
3. Store words in a vector  
4. Reverse the vector  
5. Join words with a single space  

This avoids extra spaces and handles all edge cases.

---

## 🧠 Algorithm

- Create a temporary string to build words  
- When a space appears, store the word if not empty  
- After traversal, store the last word  
- Reverse the word list  
- Construct final string  

---
