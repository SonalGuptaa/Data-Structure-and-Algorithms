#include<bits/stdc++.h>
using namespace std;
int prefixSum(int arr[],int n)
{
    int prefix[n]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    int largestSum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
             int subarraySum=0;
            if(i>0)
            {
              subarraySum=prefix[j]-prefix[i-1];
            }
            else
            {
                prefix[j];
            }
                largestSum= max(largestSum,subarraySum);
        }
    
    }
    return largestSum;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);

    cout<<prefixSum(arr,n);
}