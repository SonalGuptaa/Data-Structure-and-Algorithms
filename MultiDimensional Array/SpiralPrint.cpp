#include<bits/stdc++.h>
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        vector<int> ans;
        int startRow = 0;
        int endRow = r - 1;
        int startCol = 0;
        int endCol = c - 1;

        // Loop Traversal
        while (startRow <= endRow && startCol <= endCol) {
            // Traverse the top boundary from left to right
            for (int col = startCol; col <= endCol; col++) {
                ans.push_back(mat[startRow][col]);
            }
            startRow++;

            // Traverse the right boundary from top to bottom
            for (int row = startRow; row <= endRow; row++) {
                ans.push_back(mat[row][endCol]);
            }
            endCol--;

            // Traverse the bottom boundary from right to left
            if (startRow <= endRow) { // Check if there are more rows to traverse
                for (int col = endCol; col >= startCol; col--) {
                    ans.push_back(mat[endRow][col]);
                }
                endRow--;
            }

            // Traverse the left boundary from bottom to top
            if (startCol <= endCol) { // Check if there are more columns to traverse
                for (int row = endRow; row >= startRow; row--) {
                    ans.push_back(mat[row][startCol]);
                }
                startCol++;
            }
        }
        return ans;
    }
};
