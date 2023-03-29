// You are given an integer array of size N. Your aim is to find all the occurrences (indices) of a given element
#include<bits/stdc++.h>
using namespace std;
int allocc(int arr[],int i,int key)
{
    int n=sizeof(arr)/sizeof(int);
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        cout<<i<<" ";
    }
    allocc(arr+1,i+1,key);

}
int main()
{
    int arr[]={1,2,5,3,1,2,3,8,6,3,6,7,9};
    // int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<allocc(arr,0,key);

}