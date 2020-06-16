---
Date: 2020/06/09 - Leet code June Daily challenge
Title: IsSubsequence
tag: leetcode, JuneDailyChallenge
---
# 09. Is Subsequence

## Problem
Given a string s and a string t, check if s is subsequence of t.

A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ace" is a subsequence of "abcde" while "aec" is not).

Follow up:
If there are lots of incoming S, say S1, S2, ... , Sk where k >= 1B, and you want to check one by one to see if T has its subsequence. In this scenario, how would you change your code?
- examples
```
Input: s = "abc", t = "ahbgdc"
Output: true

Input: s = "axc", t = "ahbgdc"
Output: false
``` 
- constraints
```
0 <= s.length <= 100
0 <= t.length <= 10^4
Both strings consists only of lowercase characters.
```

## Solution
- My thought process
1. let's compare each elements one by one
2. if s[] == t[], increase index of s by one and go through t's loop
3. if s's index is s'index = s.size(), then return true 
4. check if t's index is the last one and s'index isn't, then return false
5. check special case: what if they both are empty -> return true
6. what if s is empty -> return true;
7. what iff t is empty -> return false
8. wrap up the above loop with the case iff t isn't empty then it will compare all the things.
```cpp
// 4ms/6.3MB
bool isSubsequence(string s, string t)
{
    // special case: if both s and t are empty
    if(s.empty() && t.empty())
    {
        return true;
    }
    // if t is not empty
    else if(!t.empty())
    {
        for(int i = 0; i < s.size(); i++)
        {
            for(int j = 0; j < t.size(); j++)
            {
                if(s[i] == t[j])
                {
                    i++;
                    if(i == s.size())
                    {
                        return true;
                    }
                }
                if(j == t.size() - 1 && i != s.size())
                {
                    return false;
                }
            }
        }
        // if s == empty
        return true;
    }
    
    //otherwise return false
    return false;
}
```

## Complexity Analysis

## Better or improved solution
- delete for loop for i.
- think about follow up question:

## things to know (Algorithms)
- Binary search