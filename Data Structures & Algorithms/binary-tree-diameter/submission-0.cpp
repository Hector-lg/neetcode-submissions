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
    
int diametro = 0;

int altura(TreeNode* node){
    if(node == nullptr){
        return 0;
    }
    
    int izquierda = altura(node->left);
    int derecha = altura(node->right);

    diametro = max(diametro,izquierda+derecha);

    return 1 + max(izquierda, derecha);
}

int diameterOfBinaryTree(TreeNode* root) {
        diametro = 0;

        altura(root);

        return diametro;
    }
};
