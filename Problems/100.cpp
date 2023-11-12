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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(!p && !q)
            return true;

        if(!p || !q)
            return false;

        std::queue<TreeNode*> qu;

        qu.push(p);
        qu.push(q);

        while(!qu.empty()){
            
            auto x = qu.front();
            qu.pop();
            auto y = qu.front();
            qu.pop();


            if((!x && y) || (x && !y))
                return false;

            if(x && y) {

            if(x->val != y -> val)
                return false;

            qu.push(x -> left);

            qu.push(y -> left);
        
            qu.push(x -> right);

            qu.push(y -> right);
            }


        }


        return true;
        
    }
};