#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print(vector<int> adj[],int v)
{
    for (int i = 0; i < v; i++) {
        cout << "Adjacency list of vertex " << i << ": ";
        for (auto j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    
}

int main()
{
    int v;
    cin >> v;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 3, 2);
    addEdge(adj, 2, 4);
    print(adj,v);
    
    
    return 0;
}
