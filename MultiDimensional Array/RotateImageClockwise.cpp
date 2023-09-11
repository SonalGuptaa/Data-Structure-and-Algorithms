#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int cols=matrix[0].size();

        for(int i=0;i<row;i++){
            for(int j=i+1;j<cols;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //Reverse the row
        for(int i=0;i<row;i++)
        {
            int low=0,high=cols-1;
            while(low<high)
            {
                swap(matrix[i][high],matrix[i][low]);
                low++;
                high--;
            }
        }
        
    }
};