#include<bits/stdc++.h>
using namespace std;
int binaraysearch(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid] < key)  //search on right part of mid
        {
           s=mid+1;        
        }
        else  //search on left part of mid
        {
            e=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    binaraysearch(arr,n,key);
}