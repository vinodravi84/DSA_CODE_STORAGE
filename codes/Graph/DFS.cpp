void dfs(int node,vector<vector<int>> adj,int vis[],vector<int> &ans){
     vis[node]=1;
     ans.push_back(node);
     for(int i: adj[node]){
         if(!vis[i]){
             dfs(i,adj,vis,ans);
         }
     }
    
    
}
int main(){
  vector<int> ans;
int start=0;
int vis[g.n]={0};
dfs(start,g.adj,vis,ans);
for(int i: ans){
    cout<<i<<" ";
}
}
