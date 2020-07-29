---
Date: 2020/06/08 - Leet code June Daily challenge
Title: PowOfTwo
tag: leetcode, JuneDailyChallenge
---
# 08.Power of Two

## Problem
Given an integer, write a function to determine if it is a power of two.

## Solution
```cpp
// 8ms / 6.1MB 
bool IsPowerOfTwo(int n)
{
     // if n = 2^0 base case
    if(n == 1)
    {
        return  true;
    }
    else
    {
        if(n > 0 && n%2 == 0 )
        {
            return isPowerOfTwo(n/2);
        }
        else
        {
            return false;
        }
    }
}

// 0ms/ 6.2MB
bool isPowerOfTwo(int n)
{
    return (n > 0 && (n == 1 || (n%2 == 0 && isPowerOfTwo(n/2))));
    
}


```
## Complexity Analysis
- O(log n)
## Better or improved solution
- Q. What makes 0.1MB of memory usage differences?  
and how can I improve faster and less memory useage?
- other solution   
  * Bit operation  
  If n is the power of two:  
n = 2 ^ 0 = 1 = 0b0000...00000001, and (n - 1) = 0 = 0b0000...0000.  
n = 2 ^ 1 = 2 = 0b0000...00000010, and (n - 1) = 1 = 0b0000...0001.  
n = 2 ^ 2 = 4 = 0b0000...00000100, and (n - 1) = 3 = 0b0000...0011.  
n = 2 ^ 3 = 8 = 0b0000...00001000, and (n - 1) = 7 = 0b0000...0111.  
we have n & (n-1) == 0b0000...0000 == 0  
Otherwise, n & (n-1) != 0.  
For example, n =14 = 0b0000...1110, and (n - 1) = 13 = 0b0000...1101.
```cpp
// 0ms / 5.9 MB, O(1)
bool IsPowerOfTwo(int n)
{
    return n > 0 && ((n & (n-1)) == 0);
}
```
## things to know (Algorithms)