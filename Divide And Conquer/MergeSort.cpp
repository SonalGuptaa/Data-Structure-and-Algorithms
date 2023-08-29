#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int s,int e)
{
    int i=s;
    int mid=(s+e)/2;
    int j=mid+1;
    vector<int> temp;
    while(i<=mid and j<=e)
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
    //Pushing the remaining left and right element
    while(i<=mid)
    {
        temp.push_back(arr[i++]);
    }
    while(j<=e)
    {
        temp.push_back(arr[j++]);
    }
    int k=0;
    for(int idx=s;idx<=e;idx++)
    {
        arr[idx]=temp[k++];
    }
}
void mergesort(vector<int> &arr,int s,int e)
{
    //Baes Case
    if(s>=e)
    {
        return;
    }
    //Rec Case
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    return merge(arr,s,e);
}
int main()
{
    vector<int> arr={10,5,2,0,7,6,4};
    int s=0;
    int e=arr.size()-1;
    mergesort(arr,s,e);
    cout<<"The Sorted Array :";
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}