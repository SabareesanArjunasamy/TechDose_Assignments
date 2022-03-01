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
//#include<algorithm>
int maxPath(TreeNode* root,int &ans)
{
    if(root==NULL) return 0;
    
    int rootleft=max(maxPath(root->left,ans),0);
    int rootright=max(maxPath(root->right,ans),0);
    
    int maxval=max(rootleft,rootright);
    
    ans=max(ans,root->val+rootleft+rootright);
    
    return root->val+maxval;
}
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        maxPath(root,ans);
        return ans;
    }
}; 