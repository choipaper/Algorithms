---
Date: 2020/06/03 - Leet code June Daily challenge
Title: Two city scheduling
---

# Two City Scheduling
## Question
There are 2N people a company is planning to interview. The cost of flying the i-th person to city A is costs[i][0],  
and the cost of flying the i-th person to city B is costs[i][1].  
Return the minimum cost to fly every person to a city such that exactly N people arrive in each city.  
Note:  
1.1 <= costs.length <= 100  
2.It is guaranteed that costs.length is even.  
3.1 <= costs[i][0], costs[i][1] <= 1000  


## Solution
1. Add cost of going to A
2. calculate differeces
3. sort the differeces in asending order 
4. add differeces of half number of the total people  


```cpp
class Solution 
{
public:
    int twoCitySchedCost(vector<vector<int>>& costs)
    {
        vector<int> diff;
        int half = costs.size() / 2;
        int minCost = 0;
        for(int i = 0; i < costs.size(); i++)
        {
            minCost += costs[i][0];
            diff.push_back(costs[i][1] - costs[i][0]);
        }
        std::sort(diff.begin(), diff.end());
        for(int i = 0; i < half; i++)
        {
            minCost += diff[i];
        }
        
        return minCost;
    }
};
```
## Complexity 
Runtime: O(NlogN) by std::sort

## other solutions to study
from : https://leetcode.com/problems/two-city-scheduling/discuss/278716/C%2B%2B-O(n-log-n)-sort-by-savings  
we do not need to perfectly sort all cost differences,  
we just need the biggest savings (to fly to A) to be in the first half of the array.  
So, we can use the quick select algorithm (nth_element in C++) and use the middle of the array as a pivot.

This brings the runtime down from 8 ms to 4 ms
```cpp
int twoCitySchedCost(vector<vector<int>>& cs, int res = 0) {
  nth_element(begin(cs), begin(cs) + cs.size() / 2, end(cs), [](vector<int> &a, vector<int> &b) {
    return (a[0] - a[1] < b[0] - b[1]);
  });
  for (auto i = 0; i < cs.size() / 2; ++i) {
    res += cs[i][0] + cs[i + cs.size() / 2][1];
  }
  return res;
}
```
- Complexity Analysis  
Runtime: O(n log n). We sort the array then go through it once. The second solution has a better average case runtime.  
Memory: O(1). We sort the array in-place.