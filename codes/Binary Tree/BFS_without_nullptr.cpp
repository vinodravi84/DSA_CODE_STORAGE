void levelorder(TreeNode* root) {
        
    if(root==nullptr)return;
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n;i++){
            TreeNode* node = q.front();
            q.pop();

            cout<<node->val<<" ";

            if(node->left)q.push(node->left);

            if(node->right)q.push(node->right);
        }
    }
}