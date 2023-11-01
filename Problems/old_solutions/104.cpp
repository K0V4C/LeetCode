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
    int maxDepth(TreeNode* root) {
        
        return preorder(root, 0);


    }

private:
    int preorder(TreeNode* root, int lv){

        if(!root)
            return lv;

        auto l = preorder(root->left, lv+1);
        auto r = preorder(root->right, lv+1);


        return std::max(l, r);

    }
};