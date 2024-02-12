class Solution {
public:
   //DFS Traversal
    bool check(int i,int col, int color[], vector<vector<int>>& graph){

        color[i]=col;

        for(auto it:graph[i])
        {
            if(color[it] == -1)
            {
                check(it,!col,color,graph);
            }
            else if(color[it] == color[i])
            {
                return false;
            }
        }
        return true;
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        int color[n];
        for (int i=0;i<n;i++) color[i]=-1;
        for(int i=0;i<n;i++){
            if(color[i]==-1) {
                if(check(i,0,color,graph)==false) return false;
            }
        }
        return true;
    }
};