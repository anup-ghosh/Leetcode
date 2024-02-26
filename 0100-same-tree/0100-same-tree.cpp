class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p and !q) return true;
        if(!p or !q) return false;
        return (p->val == q->val) and isSameTree(p->left,q->left) and isSameTree(p->right,q->right);
    }
};