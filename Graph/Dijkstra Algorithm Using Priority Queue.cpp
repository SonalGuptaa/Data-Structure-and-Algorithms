class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        vector<int> dist(V);
        for(int i=0;i<V;i++)
        {
            dist[i] = 1e9;
        }
        dist[S] = 0;
        //{weight,node}
        pq.push({0,S});
        
        while(!pq.empty())
        {
            int wt =pq.top().first;
            int node=pq.top().second;
            pq.pop();
            
            for(auto it: adj[node])
            {
                int edgeWt = it[1];
                int adjNode = it[0];
                
                if(wt+edgeWt < dist[adjNode])
                {
                    dist[adjNode] = wt+edgeWt;
                    pq.push({dist[adjNode],adjNode});
                }
            }
            
        }
        return dist;
    }
};
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        vector<int> dist(V);
        for(int i=0;i<V;i++)
        {
            dist[i] = 1e9;
        }
        dist[S] = 0;
        //{weight,node}
        pq.push({0,S});
        
        while(!pq.empty())
        {
            int wt =pq.top().first;
            int node=pq.top().second;
            pq.pop();
            
            for(auto it: adj[node])
            {
                int edgeWt = it[1];
                int adjNode = it[0];
                
                if(wt+edgeWt < dist[adjNode])
                {
                    dist[adjNode] = wt+edgeWt;
                    pq.push({dist[adjNode],adjNode});
                }
            }
            
        }
        return dist;
    }
};
