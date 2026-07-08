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
class Solution
{
public:

    // Function to perform inorder traversal
    void inorder(TreeNode* root, long long &prev, bool &isBST)
    {
        // Base case:
        // If the current node is NULL or we already know the tree is not a BST,
        // stop the recursion.
        if(root == NULL || !isBST)
            return;

        // Visit the left subtree first.
        inorder(root->left, prev, isBST);

        // In a BST, inorder traversal must be in strictly increasing order.
        // If the previous value is greater than or equal to the current node's value,
        // then the tree is not a BST.
        if(prev >= root->val)
        {
            isBST = false;
            return;
        }

        // Update the previous visited value.
        prev = root->val;

        // Visit the right subtree.
        inorder(root->right, prev, isBST);
    }

    // Main function to check whether the binary tree is a BST.
    bool isValidBST(TreeNode* root)
    {
        // Initialize prev with the smallest possible value.
        // We use long long because node values can be INT_MIN.
        long long prev = LLONG_MIN;

        // Assume the tree is a BST initially.
        bool isBST = true;

        // Start inorder traversal.
        inorder(root, prev, isBST);

        // Return the final result.
        return isBST;
    }
};