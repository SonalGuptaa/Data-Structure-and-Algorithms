#include<bits/stdc++.h>
using namespace std;

int printSubarrays(int arr[],int n)
{
    int largestSum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarraySum=0;
            for(int k=i;k<=j;k++)
            {
                subarraySum+=arr[k];
            }
            largestSum=max(largestSum,subarraySum);
        }
    }
    return largestSum;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);

    cout<<printSubarrays(arr,n);
}