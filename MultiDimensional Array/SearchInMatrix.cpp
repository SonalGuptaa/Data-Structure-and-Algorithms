#inlcude<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool binarySearch(vector<int> &temp,int target)
    {
        int n=temp.size();
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(temp[mid]==target)
            {
                return true;
            }
            else if(target >temp[mid])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i=0;i<row;i++){
            if(matrix[i][0]<=target and target<=matrix[i][col-1])
            {
                return binarySearch(matrix[i],target);
            }
        }
       return false;
    }
};


//  