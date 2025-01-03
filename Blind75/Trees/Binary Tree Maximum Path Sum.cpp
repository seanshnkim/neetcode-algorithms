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
    int maxPathSum(TreeNode* root) {
        if (!root->left && !root->right) {
            return root->val;
        }
        int leftMaxSum = 0, rightMaxSum = 0;
        if (root->left) {
            leftMaxSum = maxPathSum(root->left);
        }
        if (root->right) {
            rightMaxSum = maxPathSum(root->right);
        }

        if (root->val >= 0) {

        }
        else {
            
        }
        
    }

    // Including rootVal. Only if rootVal >= 0
    int calcMaxSum(int rootVal, int leftVal, int rightVal) {
        int maxSum = rootVal;
        
        if (leftVal > 0) {
            maxSum += leftVal;    
        }
        if (rightVal > 0) {
            maxSum += rightVal;
        }
        return maxSum;
    }
};
