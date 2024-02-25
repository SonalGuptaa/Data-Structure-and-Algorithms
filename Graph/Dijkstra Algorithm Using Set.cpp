class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        set< pair<int,int>> st;
        vector<int> dist(V);
        for(int i=0;i<V;i++)
        {
            dist[i]  = 1e9;
        }
        
        //{weight,node};
        st.insert({0,S});
        dist[S]=0;
        
        while(!st.empty())
        {
            auto it = *(st.begin());
            int wt=it.first;
            int node=it.second;
            st.erase(it);
            
            for(auto it: adj[node])
            {
                int adjnode = it[0];
                int edgW = it[1];
                
                if(wt+edgW < dist[adjnode])
                {
                    //erase if its existed 
                    if(dist[adjnode] != 1e9){
                        st.erase({dist[adjnode],adjnode});
                    }
                    
                    dist[adjnode] = wt+edgW;
                    st.insert({dist[adjnode],adjnode});
 
                }
            }
        }
        return dist;
    }
};
