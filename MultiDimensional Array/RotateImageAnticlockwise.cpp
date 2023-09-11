void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int row=matrix.size();
    int cols=matrix[0].size();

    for(int i=0;i<row;i++){
       for(int j=i+1;j<cols;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    //reverse column
    for(int i=0;i<row;i++)
    {
        int low=0;
        int high=cols-1;
        while(low<high)
        {
            swap(matrix[low][i],matrix[high][i]);
            low++;
            high--;
        }
        
    }
}