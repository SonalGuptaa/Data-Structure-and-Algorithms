class Solution {
private:
    void topoSort(int node, int vis[], vector<pair<int, int>> adj[], stack<int> &st) {
        vis[node] = 1;
        for (auto it : adj[node]) {
            int v = it.first;
            if (vis[v] == 0) {
                topoSort(v, vis, adj, st);
            }
        }
        st.push(node);
    }

public:
    vector<int> shortestPath(int N, int M, vector<vector<int>>& edges) {
        
        vector<pair<int, int>> adj[N];

        // edge = [[0,1,2],[0,2,1]]
        for (int i = 0; i < M; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            adj[u].push_back({v, wt});
        }

        // Topo Sort;
        int vis[N] = {0};
        stack<int> st;
        
        for (int i = 0; i < N; i++) {
            if (vis[i] == 0) {
                topoSort(i, vis, adj, st);
            }
        }

        // Distancing
        vector<int> dist(N);
        for(int i=0;i<N;i++)
        {
            dist[i]=1e9;
        }
        dist[0] = 0;
        while (!st.empty()) {
            int node = st.top();
            st.pop();
            for (auto it : adj[node]) {
                int v = it.first;
                int wt = it.second;
                
                if (dist[node] + wt < dist[v]) {
                    dist[v] = dist[node] + wt;
                }
            }
        }
        for(int i=0;i<N;i++) 
       if(dist[i]==1e9) dist[i]=-1;
       return dist;
        // return dist;
    }
};
