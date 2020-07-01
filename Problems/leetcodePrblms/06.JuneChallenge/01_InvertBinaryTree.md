---
Date: 2020/06/01 - Leet code June Daily challenge
Title: InvertBinaryTree
tag: leetcode, JuneDailyChallenge
---
# 01.Invert Binary Tree

## Problem
- Example
```
     4
   /   \
  2     7
 / \   / \
1   3 6   9
Output:

     4
   /   \
  7     2
 / \   / \
9   6 3   1
```
## Solution
```cpp
TreeNode* invertTree(TreeNode* root) 
    {
        // check node whether nullptr or not
        if(root == nullptr)
        {
            return root;
        }
        // if node is child node, then return the node
        // this part can simply omitted
        if(root->left == nullptr && root->right == nullptr)
        {
            return root;
        }
        else
        {
            // recursively find children and swap
            // then return the node
            TreeNode* temp = invertTree(root->left);
            root->left = invertTree(root->right);
            root->right = temp;
            return root;
        }
    }
```
## Complexity Analysis

## Better or improved solution

## things to know (Algorithms)