---
Date: 2020/06/14 
Title: 14_CheapestFlights.md
tag: leetcode, JuneDailyChallenge
---
# 14.Cheapest Flights within K stops

## Problem
There are n cities connected by m flights. Each flight starts from city u and arrives at v with a price w.

Now given all the cities and flights, together with starting city src and the destination dst, your task is to find the cheapest price from src to dst with up to k stops. If there is no such route, output -1.

```
Example 1:
Input: 
n = 3, edges = [[0,1,100],[1,2,100],[0,2,500]]
src = 0, dst = 2, k = 1
Output: 200
Explanation: 
        0
   100 / \ 500
      /   \
    1 ---- 2
       100   
The cheapest price from city 0 to city 2 with at most 1 stop costs 200, as marked red in the picture.

Example 2:
Input: 
n = 3, edges = [[0,1,100],[1,2,100],[0,2,500]]
src = 0, dst = 2, k = 0
Output: 500
Explanation: 
The graph looks like this:


The cheapest price from city 0 to city 2 with at most 0 stop costs 500, as marked blue in the picture.
```

## Solution
```cpp

```
## Complexity Analysis

## Better or improved solution

## things to know (Algorithms)
- Graph