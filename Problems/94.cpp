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

private:
    static void inorder(TreeNode* node, std::vector<int>& vec){
        if(!node)
            return;

        if(node->left)
            inorder(node->left, vec);

        vec.push_back(node->val);

        if(node->right)
            inorder(node->right, vec);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> vec;
        inorder(root, vec);

        return vec;
    }
};