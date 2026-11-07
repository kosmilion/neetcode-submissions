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

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;

        int maxDiam = 0;

        calculateHeight(root, maxDiam);

        return maxDiam;
    }

private:
    int calculateHeight(TreeNode* root, int& maxDiam){
        if(!root) return 0;

        int left = calculateHeight(root -> left, maxDiam);
        int right = calculateHeight(root -> right, maxDiam);
        
        maxDiam = max(maxDiam, right + left);

        return max(right, left) + 1;
    }
};

