---
Date: 2020/06/04 - Leet code June Daily challenge
Title: Reverse String
tag: leetcode, JuneDailyChallenge
---
# 04.Reverse String

## Question
Write a function that reverses a string. The input string is given as an array of characters char[].  
**Do not allocate extra space for another array**, you must do this by modifying the input array in-place with O(1) extra memory.  
You may assume all the characters consist of printable ascii characters.  
- Example 1:  
```
Input: ["h","e","l","l","o"]  
Output: ["o","l","l","e","h"]  
```
- Example 2:
```  
Input: ["H","a","n","n","a","h"]  
Output: ["h","a","n","n","a","H"]  
```
## Solution

```cpp

void reverseString(vector<char>& s) 
{
    for(int i = 0, j = s.size() - 1; i < s.size()/2 && j>=s.size()/2; i++, j--)
    {
        std::swap(s[i], s[j]);
         
    }
}

```

```cpp
void reverseString(vector<char>& s)
{
    int i = 0;
    int j = s.size()-1;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
```