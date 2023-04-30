#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int s,int e)
{
    int i=s;
    int m=(s+e)/2;
    int j=m+1;
    vector<int> temp;
    while(i<=m && j<=e)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    //remaining element from left part
    while(i<=m)
    {
        temp.push_back(arr[i]);
    }
    //Remaining element from right part
    while(j<=e)
    {
        temp.push_back(arr[j]);
    }

    //copy back from temp to orignal array

    int k=0;
    for(int idx=s;idx<=e;idx++)
    {
        arr[idx]= temp[k];
        k++;
    }
}

void merge_sort(vector<int> &arr,int s,int e)
{
    int mid=(s+e)/2;
    //Base Case
    if(s>=e)
    {
        return;
    }
    merge_sort(arr,s,mid-1);
    merge_sort(arr,mid+1,e);
    return merge(arr,s,e);

}
int main()
{
    vector<int> arr{10,5,2,0,7,6,4};
    int s=0;
    int e=arr.size();
    merge_sort(arr,s,e);
    // for(int i:arr)
    // {
    //     cout<<i;
    // }

}