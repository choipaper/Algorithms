/**
 * Date: 2020/06/01 - Leet code June Daily challenge
 * Title: 01 Invert Binary Tree
 */

/**
 * Invert a binary tree
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
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
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
};
    }
};