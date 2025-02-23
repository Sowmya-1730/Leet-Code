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
    unordered_map<int,int>postIndexMap;
    int preIndex=0;
    TreeNode* construction(vector<int>& preorder,vector<int>& postorder,int left,int right)
    {
        if(preIndex >= preorder.size() || left > right) return nullptr;
        TreeNode* root=new TreeNode(preorder[preIndex++]);

        if(left==right)return root;

        int postIndex = postIndexMap[preorder[preIndex]];

        root->left = construction(preorder,postorder,left,postIndex);
        root->right = construction(preorder,postorder,postIndex+1,right-1);

        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        for(int i=0;i<postorder.size();i++)
        {
            postIndexMap[postorder[i]]=i;
        }
        return construction(preorder,postorder,0,postorder.size()-1);
    }
};