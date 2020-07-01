---
Date: 2020/06/02 - Leet code June Daily challenge
Title: DeleteNode
tag: leetcode, JuneDailyChallenge
---
# 02.Delete Node

## Problem
Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

Given linked list -- head = [4,5,1,9], which looks like following:
- Examples
```
Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.

Input: head = [4,5,1,9], node = 1
Output: [4,5,9]
Explanation: You are given the third node with value 1, the linked list should become 4 -> 5 -> 9 after calling your function.
```
## Solution
```cpp
// To solve this problem,
    // swap value of target node to the tail, 
    // so list stays connected and the node can be deleted.
    // first approach
    void deleteNode(ListNode* node) 
    {
        int temp;
        ListNode* curr = node;
        ListNode* target = node->next;
        while(target->next != nullptr)
        {
            // swap values
            temp = curr->val;
            curr->val = target->val;
            target->val = temp;
            
            // increment
            curr = curr->next;
            target = target->next;
        }
        temp = curr->val;
        curr->val = target->val;
        target->val = temp;
 
        // set the curr as tail
        curr->next = nullptr;
        // then discard target node
        delete target;
    }
    
    // improved one(simple)
    void deleteNode(ListNode* node) 
    {
        node->val = node->next->val;
        node->next = node->next->next;
    }
```
## Complexity Analysis

## Better or improved solution

## things to know (Algorithms)