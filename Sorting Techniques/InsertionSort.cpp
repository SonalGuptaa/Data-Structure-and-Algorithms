#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int prev=i-1;
        int curr=arr[i];
        while(prev>=0 && arr[prev]>curr)
        {
            arr[prev+1]=arr[prev];
            prev=prev-1;
        }
        arr[prev+1]=curr;
    }

}
int main()
{
    int arr[]={5,3,2,10,1,6,4,};
    int n=sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}