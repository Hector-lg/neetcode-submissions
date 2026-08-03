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
    
int maxProfundidad = 0;
void dfs(TreeNode* node, int profundidadActual){
    if(node == nullptr){return;}

    if(profundidadActual > maxProfundidad){maxProfundidad=profundidadActual;}
    
    dfs(node->left, profundidadActual+1);
    dfs(node->right, profundidadActual+1);
    
}
int maxDepth(TreeNode* root) {
    if(root == nullptr){
        return 0;
    }
    dfs(root,1);
    return maxProfundidad;
    

}
};
