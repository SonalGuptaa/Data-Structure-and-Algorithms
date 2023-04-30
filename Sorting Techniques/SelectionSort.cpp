#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++)
    {
        int current=arr[i];
        int min_pos=i;
               //Using this loop to find the minimum element
        for(int j=i;j<n;j++)
        {
            if(arr[j]<current)
            {
                 min_pos=j;
            }
        }
      //Swap outside the loop
        swap(arr[min_pos],arr[i]);    
    }
}

int main()
{
    int arr[]={5,3,2,1,6};
    int n=sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    for(int i: arr) 
    {
        cout<<i<<" "<<endl;
    }

}