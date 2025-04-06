vector<int> bfs(vector<vector<int>> &adj) {
    // Code here
    int v=adj.size();
    int vis[v]={0};
    vector<int> bfs;
    queue<int> q;
    q.push(0);
    vis[0]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(int i:adj[node]){
            if(!vis[i]){
                vis[i]=1;
                q.push(i);
            }
        }
    }
    return bfs;
}