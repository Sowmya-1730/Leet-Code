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
    TreeNode* process(string traversal)
    {
        int i=0,n=traversal.size();
        TreeNode* root;
        stack<TreeNode* >st;
        while(i<n)
        {
            int depth=0;
            while(i<n && traversal[i]=='-')
            {
                depth+=1;
                i+=1;
            }
            int num=0;
            while(i<n && isdigit(traversal[i]))
            {
                num=num*10+(traversal[i]-'0');
                i+=1;
            }
            TreeNode* node=new TreeNode(num);
            if(st.empty())
            {
                st.push(node);
                root=node;
            }
            while(st.size()>depth)
            {
                st.pop();
            }
            if(!st.empty())
            {
                if(!st.top()->left)
                {
                    st.top()->left=node;
                }
                else
                {
                    st.top()->right=node;
                }
            }
            st.push(node);
        }
        return root;
    

    }
    TreeNode* recoverFromPreorder(string traversal) {
        TreeNode* res=process(traversal);
        return res;
    }
};