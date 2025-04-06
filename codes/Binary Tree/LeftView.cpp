vector<int> leftSideView(TreeNode* root) {
        
    vector<int> v;
    if(root==nullptr)return v;
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n;i++){
            TreeNode* node = q.front();
            q.pop();

            if(i==0)v.push_back(node->val);

            if(node->left)q.push(node->left);

            if(node->right)q.push(node->right);
        }
    }
    return v;
}