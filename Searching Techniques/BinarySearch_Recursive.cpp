int binarysearch(int arr[],int s,int e,int x)
{
    //Base Case
    if(s>e)
    {
        return -1;
    }
    int mid=(s+e)/2;
    //Recursive Case
    if(arr[mid]==x)
    {
        return mid;
    }
    if(arr[mid]>x)
    return binarysearch(arr,s,mid-1,x);
    else
    return binarysearch(arr,mid+1,e,x);
}