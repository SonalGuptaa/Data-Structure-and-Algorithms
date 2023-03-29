#include<bits/stdc++.h>
using namespace std;
int lastocc(int arr[],int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    //First Ask the Subproblem if it is -1 then check for curr that is arr[0]
    int subidx=lastocc(arr+1,n-1,key);
    if(subidx==-1)
    {
        if(arr[0]==key)
        {
            return 0;
        }
        return -1;
    }
    else
    {
        return subidx+1;

    }
}
int main()
{
    int arr[]={1,3,5,7,6,7,2};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<lastocc(arr,n,key);

}