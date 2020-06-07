---
Date: 2020/06/06 - Leet code June Daily challenge
Title: Queue Reconstruction
---
# 06.Queue Reconstruction by height

## Problem
Suppose you have a random list of people standing in a queue. Each person is described by a pair of integers (h, k),   
where h is the height of the person and k is the number of people in front of this person who have a height greater than or equal to h.  
Write an algorithm to reconstruct the queue.  

- Note: The number of people is less than 1,100.
- examples
```
Input:
[[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]

Output:
[[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]
```
## Solution
- thinking process
```  
1. sort by h([i][0]) in ascending order  
2. sort by k([i][1]) in ascending order  
    while sorting
        if validate     
            validation:  
            if current h <= list[i]  
                count++  
                if count > k  
                    return false  
            return true  
            eneque
        else
            dequeue   
            eneque current one    
```            
sort (h,k) in ascending order
make function(can be lamda function):
    return first.h < second.h || (first.h == second.h && first.k < second.k)
make queue
enqueue
```cpp
vector<vector<int>> reconstructQueue(vector<vector<int>>& people)
{
    sort(people.begin(), people.end(), cmp);
    vector<vector<int>> queue;
    for(int i = 0; i < people.size(); i++)
    {
        queue.insert(queue.begin() + people[i][1], people[i]);
    }
    return queue;
}

// custom comparator
static bool cmp(const vector<int>& p1, const vector<int>& p2)
{
    if(p1[0]!=p2[0]) 
    {
        return p1[0]>p2[0];
    }
    else 
    {
        return p1[1]<p2[1];
    }
}
```
## Complexity Analysis

## Better or improved solution

## things to know (Algorithms)