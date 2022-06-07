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
vector<int> getInOrderTraversal(TreeNode *root) {
    vector<int> results;
    stack<TreeNode*> s;

    while(!s.empty() || root) {
        while(root) {
            s.push(root);
            root = root->left;
        }
        root = s.top();
        s.pop();
        results.push_back(root->data);
        root = root->right;
    }
    return results;
}