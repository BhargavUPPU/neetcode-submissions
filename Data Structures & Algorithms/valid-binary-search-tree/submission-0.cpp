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
    bool isWithinBounds(TreeNode* root ,int lower_bound,int upper_bound){
        if(root==nullptr){
            return true;
        }
        if(!(lower_bound<root->val && root->val<upper_bound)){
            return false;
        }
        if(!isWithinBounds(root->left,lower_bound,root->val)){
            return false;
        }
        return isWithinBounds(root->right,root->val,upper_bound);
    }
    bool isValidBST(TreeNode* root) {

        return isWithinBounds(root,INT_MIN,INT_MAX);
        
    }
};
