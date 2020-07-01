---
Date: 2020/06/05 - Leet code June Daily challenge
Title: Random Pick
tag: leetcode, JuneDailyChallenge
---
# 05.Random pick with weight

## Problem
Given an array w of positive integers, where w[i] describes the weight of index i, write a function pickIndex which randomly picks an index in proportion to its weight.  
Note:  
1. 1 <= w.length <= 10000
2. 1 <= w[i] <= 10^5
3. pickIndex will be called at most 10000 times.  
* examples
```
Input: 
["Solution","pickIndex"]
[[[1]],[]]
Output: [null,0]

Input: 
["Solution","pickIndex","pickIndex","pickIndex","pickIndex","pickIndex"]
[[[1,3]],[],[],[],[],[]]
Output: [null,0,1,1,1,0]
```
## Solution
```cpp
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
Solution(vector<int>& w) 
{
        
}
    
int pickIndex() 
{
        
}
```
## Complexity Analysis

## Better or improved solution
* example solution
```cpp
class Solution {
public:
    vector<int> pre;
    int size = 0;
    
    Solution(vector<int>& w) {
        size = w.size();
        pre.resize(size + 1, 0);
        for (int i = 0; i < w.size(); i++) {
            pre[i + 1] = pre[i] + w[i];
            //cout << pre[i + 1] << " , ";
        }    
        //cout << endl;
    }
    
    int pickIndex() {
        int rnd = rand() % pre[size] + 1;
        
        int start = 0, end = size;
        
        while (start + 1 < end) {
            int mid = start + (end - start)/2;
            if (pre[mid] < rnd) {
                start = mid;
            } else if (pre[mid] > rnd) {
                end = mid;
            } else {
                return mid - 1;
            }
        }
        
        if (pre[start] >= rnd) {
            return (start - 1);
        }
        
        return (end - 1);        
    }
};

```

## things to know (Algorithms)