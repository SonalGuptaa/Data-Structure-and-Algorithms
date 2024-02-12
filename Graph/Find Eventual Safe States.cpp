class Solution {
public:
    vector<int> eventualSafeNodes
    (vector<vector<int>>& graph) {

        int n=graph.size();
        vector<int> adjrev[n];
        int indegree[n];
        for(int i=0;i<n;i++)
        {
            indegree[i] = 0;
        }
        for(int i=0;i<n;i++)
        {
            for(auto it:graph[i])
            {
                adjrev[it].push_back(i);
                indegree[i]++;
            }
        }

        queue<int> q;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(indegree[i] ==0)
            {
                q.push(i);
            }
        }

        while(!q.empty())
        {
            int node=q.front();
           
            q.pop();
             ans.push_back(node);

            for(auto it: adjrev[node])
            {
                indegree[it]--;

                if(indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};