#include<bits/stdc++.h>
using namespace std;

int trappedWater(vector<int> height)
{
    int n=height.size();
    //Corner Case
    if(n<=2)
    {
        return ;
    }
    vector<int> left(n,0);
    vector<int> right(n,0);
    left[0]=height[0];
    right[n-1]=height[n-1];

    //For left part
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],height[i]);
    }
    //for right part
    for(int i=1;i<n;i++)
    {
        right[n-i-1]=max(right[n-i],height[n-i-1]);
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+= min(left[i],right[i])-height[i];
    }
    return sum;
}