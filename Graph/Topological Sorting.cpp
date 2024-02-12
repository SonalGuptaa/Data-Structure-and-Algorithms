//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    	public:
    void dfs(int node,int vis[],vector<int> adj[] ,stack<int> &st)
    {
        vis[node]=1;
        
        for(auto it: adj[node])
        {
            if(vis[it]==0)
            {
                dfs(it,vis,adj,st);
            }
        }
        st.push(node);
    }

	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int> st;
	    int vis[V] ={0};
	    
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i] == 0)
	        {
	            dfs(i,vis,adj,st);
	        }
	    }
	    vector<int> ans;
	    
	    while(!st.empty())
	    {
	       ans.push_back(st.top());
	       st.pop();
	    }
	    return ans;
	}
};