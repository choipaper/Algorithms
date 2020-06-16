---
Date: 2020/06/15 
Title: 15_SearchBST.md
tag: leetcode, JuneDailyChallenge
---
# 15.Search in a Binary Search Tree

## Problem
Given the root node of a binary search tree (BST) and a value. You need to find the node in the BST that the node's value equals the given value. Return the subtree rooted with that node. If such node doesn't exist, you should return NULL.
```
For example, 

Given the tree:
        4
       / \
      2   7
     / \
    1   3

And the value to search: 2
You should return this subtree:

      2     
     / \   
    1   3
```
In the example above, if we want to search the value 5, since there is no node with value 5, we should return NULL.

Note that an empty tree is represented by NULL, therefore you would see the expected output (serialized tree format) as [], not null.
## Solution
```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 // 64ms/ 34.8MB
TreeNode* searchBST(TreeNode* root, int val) 
{
    if(root == nullptr)
    {
        return nullptr;
    }
    if(root->val == val)
    {
        return root;
    }
    else
    {
        TreeNode* left = searchBST(root->left, val);
        if(left != nullptr)
        {
            return left;
        }
        else
        {
            TreeNode* right = searchBST(root->right, val);
            if(right != nullptr)
            {
                return right;
            }
            else
            {
                return left; //or right either is fine since they both nullptr
            }
        }
    }
}
```
## Complexity Analysis

## Better or improved solution
```cpp
//68ms/ 34.8MB but better readability 
// Since it is BST
TreeNode* searchBST(TreeNode* root, int val) 
{
    if(root == nullptr)
    {
        return nullptr;
    }
    if(root->val == val)
    {
        return root;
    }
    else if(val < root->val)
    {
        return searchBST(root->left, val);
    }
    else
    {
        return searchBST(root->right, val);
    }
    // otherwise 
    return nullptr;
}
```

## things to know (Algorithms)