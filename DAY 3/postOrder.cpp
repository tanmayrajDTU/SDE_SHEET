/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getPostOrderTraversal(TreeNode *root)
{
        stack<TreeNode*> stk;
        if(root)stk.push(root);
        vector<int> ans;
        while(stk.size())
        {
            auto p = stk.top();
            if(p == nullptr)
            {
                stk.pop();
                ans.push_back(stk.top()->data);
                stk.pop();
                continue;
            }
            stk.push(nullptr);
            if(p->right)stk.push(p->right);
            if(p->left)stk.push(p->left);
        }
        return ans;
}