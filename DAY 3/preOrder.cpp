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
vector<int> getPreOrderTraversal(TreeNode *root)
{
    if(!root)
        return {};
    vector<int> results;
    stack<TreeNode*> s;
    s.push(root);
    while(!s.empty()) {
        TreeNode *front = s.top();
        s.pop();
        results.push_back(front->data);
        if(front->right)
            s.push(front->right);
        if(front->left)
            s.push(front->left);
    }
    return results;
}
