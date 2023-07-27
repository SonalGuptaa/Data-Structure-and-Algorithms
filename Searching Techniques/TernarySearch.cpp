#include<bits/stdc++.h>
using namespace std;
int ternary(int arr[],int target,int s,int e)
{
    if(s<=e)
    {
        int mid1=s+(e-s)/3;
        int mid2=e-(e-s)/3;
        if(arr[mid1]==target)
        {
            return mid1;
        }
        if(arr[mid2]==target)
        {
            return mid2;
        }
       if(arr[mid1]>target){
            // e=mid1-1;
            return ternary(arr,target,s,mid1-1);
        }
        else if(arr[mid2]<target)
        {
            // s=mid2+1;
            return ternary(arr,target,mid2+1,e);
        } 
        else
        {
            // s=mid1+1;
            // e=mid2-1;
            return ternary(arr,target,mid1+1,mid2-1);
        }

    }
    return -1;
}
int main()
{
    int arr[]={7,12,19,24,31,48,51,63,67,73,81};
    // int n=arr.size();
    int n=sizeof(arr)/sizeof(int);
    int target=51;
    int s=0;
    int e=n-1;
    int p=ternary(arr,target,s,e);
    cout<<p;

}