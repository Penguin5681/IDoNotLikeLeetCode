class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr)
            return ans;
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty()) {
            int n = Q.size();
            for (int i = 0; i < n; ++i) {
                TreeNode* curr = Q.front();
                Q.pop();

                if (i == n - 1)
                    ans.push_back(curr->val);
                if (curr->left != nullptr)
                    Q.push(curr->left);
                if (curr->right != nullptr)
                    Q.push(curr->right);
            }
        }
        return ans;
    }
};