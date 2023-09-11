#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int cols=matrix[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=i+1;j<cols;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};