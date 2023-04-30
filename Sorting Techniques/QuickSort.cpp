#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int s,int e)
{
    int pivot=arr[e];
    int i=s-1;
    for(int j=s;j<e;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        // else(arr[j]>pivot)
        // {
        //     j++;
        // }
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}
void quickSort(vector <int> &arr,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    //Base Case
    int p= partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main()
{
    vector<int> arr{10,5,2,0,7,6,4};
    int n=arr.size();
    quickSort(arr,0,n-1);
    for(int x:arr)
    {
        cout<<x<<" ";
    }
}