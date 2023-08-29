#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& arr) {
    int n=arr.size();
    int largest=INT_MIN;
    int product=1;
    for(int i=0;i<arr.size();i++)
    {
        product=product*arr[i];
        largest=max(largest,product);
    }
    return largest;
    
    }
}; 
// int largest=0;
    // for(int i=0;i<n;i++)
    // {
    //     int pro=1;
    //     for(int j=i;j<n;j++)
    //     {
    //         pro *= arr[j];
    //         largest=max(largest,pro);
            
    //     }
    // }
    // return largest;  