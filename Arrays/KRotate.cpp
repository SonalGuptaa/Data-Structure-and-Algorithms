#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> a,int k,int n)
{
     vector<int> ans;
     k=k%n;
     for(int i=n-k; i<=n-1; i++)
     {
        ans.push_back(a[i]);
     }
     //for rem
     for(int i=0; i<n-k; i++)
     {
        ans.push_back(a[i]);
     }
     return ans;
}
int main()
{
    vector<int> a={1,2,3,4,5,6,7};
    int n=a.size();
    int k=3;
    vector<int> reversedArray = reverse(a, k, n);

    // Print the reversed array
    for (int i = 0; i < reversedArray.size(); i++)
    {
        cout << reversedArray[i] << " ";
    }
    cout << endl;
    
}