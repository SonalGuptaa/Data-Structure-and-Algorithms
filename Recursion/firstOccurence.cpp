
#include<bits/stdc++.h>
using namespace std;
int firstocc(int arr[],int n,int key)
{
    //Base Case
    if(n==0)
    {
        return -1;
    }
    if(arr[0]==key)
    {
        return 0;
    }
    int subidx=firstocc(arr+1,n-1,key);
    if(subidx!=-1)
    {
        return subidx+1;
    }
    return -1;

}
int main()
{
    int arr[]={1,3,5,7,6,2};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<firstocc(arr,n,key);

    
}