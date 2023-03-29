#include<bits/stdc++.h>
using namespace std;

//Note Pass by value its not Working
void printArray(vector<int> &arr,int n)
{
    for(int i=0;i<n;i++)
    {
         cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void fillArray(vector<int> &arr,int i,int n,int val)
{
    if(i==n)
    {
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        printArray(arr,n);
        return;
    }
    //rec case
    arr[i]=val;
    fillArray(arr,i+1,n,val+1);
    //Backtracking Code
    arr[i]=-1*arr[i];
}
int main()
{
    vector<int> arr{100,0};
    int n;
    cin>>n;
    fillArray(arr,0,n,1);
    printArray(arr,n);
}