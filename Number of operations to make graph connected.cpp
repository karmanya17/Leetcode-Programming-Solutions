class Solution {
public:
    void dfs(int s,vector<bool>&vis,vector<int>adj[])
    {
        vis[s]=true;
        for(auto u:adj[s])
        {
            if(vis[u]==false)
            {
                dfs(u,vis,adj);
            }
        }
        return;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        vector<bool>vis(n,false);
        int m=connections.size();
        int c=0;
        if(m<n-1)
            return -1;
        for(int i=0;i<m;i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
            {
                c++;
                dfs(i,vis,adj);
            }
        }
        return c-1;
    }

};
