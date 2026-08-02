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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) {return root;}
    queue<TreeNode*> cola;
    cola.push(root);

    while(!cola.empty()){
        TreeNode* node = cola.front();
        cola.pop();
        TreeNode *temp = node->left;
        node->left = node->right;
        node->right = temp;

        if(node->left !=nullptr) cola.push(node->left);
        if(node->right !=nullptr) cola.push(node->right);
        
    }
    return root;
    }
};
