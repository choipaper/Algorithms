---
Date: 2020/06/10 - Leet code June Daily challenge
Title: SearchInsertPos
---
# 10. Search Insert Position

## Problem
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.  
You may assume no duplicates in the array.
- Examples
```
Input: [1,3,5,6], 5
Output: 2

Input: [1,3,5,6], 2
Output: 1

Input: [1,3,5,6], 7
Output: 4

Input: [1,3,5,6], 0
Output: 0
```
## Solution
```cpp
//12ms/ 10MB
int searchInsert(vector<int>& nums, int target) 
{
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] >= target)
        {
            return i;
        }
    }

    return nums.size();
}
```
## Complexity Analysis

## Better or improved solution

## things to know (Algorithms)