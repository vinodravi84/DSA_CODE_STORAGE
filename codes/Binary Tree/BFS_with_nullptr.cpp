void levelOrder(TreeNode* root) {
    if(root==nullptr)return ;

    queue<TreeNode*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
      TreeNode* node = q.front();
      q.pop();

      if(node!=nullptr){
          cout<<node->val<<" ";

          if(node->left)q.push(node->left);
          if(node->right)q.push(node->right);
      }
      else if(!q.empty()){
          q.push(nullptr);
      }
    }
    
}