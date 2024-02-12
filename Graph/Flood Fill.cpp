class Solution {
private:
    void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,int icol,int color,int delrow[],int delcol[])
    {
        ans[row][col]= color;
        int n=image.size();
        int m=image[0].size();
        
        //traverse the neighbours
        for(int i=0;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol = col+delcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==icol && ans[nrow][ncol]!= color){
                dfs(nrow,ncol,ans,image,icol,color,delrow,delcol);
            }
        }

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int icol = image[sr][sc];
        vector<vector<int>> ans = image;
        int delrow[] = {-1,0,+1,0};
        int delcol[] ={0,+1,0,-1};
        dfs(sr,sc,ans,image,icol,color,delrow,delcol);
        return ans;
   
    }
};