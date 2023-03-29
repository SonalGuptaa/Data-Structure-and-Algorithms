#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n)
{
    //base case 
    if(n==0 or n==1)
    {
        return true;
    }
    //rec case
    if(arr[0]<arr[1] and isSorted(arr+1,n-1))
    {
        return true;
    }
    return false;
}
bool isSorted2(int arr[],int i,int n)
{
    if(i==n-1)
    {
        return true;
    }
    if(arr[i]<arr[i+1] and isSorted2(arr,i+1,n))
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[]={1,2,3,4,8,6};
    int n=sizeof(arr)/sizeof(int);
    // cout<<isSorted2(arr,0,n);
    int ans=isSorted2(arr,0,n);
    if(ans==1)
    {
        cout<<"The given array is Sorted";
    }
    else
    {
        cout<<"The given array is not Sorted";
    }

}