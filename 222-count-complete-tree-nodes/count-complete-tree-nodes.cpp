
class Solution {
public:
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
 */ int countNodes(TreeNode* root) {
        if(root==NULL)
        return 0;
      int left=sleft(root);
      int right=sright(root);
         
        if(left==right)
        return(1<<left)-1;
        else{
           return 1 + countNodes(root->left) + countNodes(root->right);
        }
    }
    int sleft(TreeNode* root){
          int height=0;
        while(root!=NULL){
            
            height++;
            root=root->left;
        }
        return height;
    }
    int sright(TreeNode* root){
       int depth=0;
        while(root!=NULL){
            
            depth++;
            root=root->right;
        }
        return depth;
    }
};