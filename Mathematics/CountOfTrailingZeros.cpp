#include<bits/stdc++.h>
using namespace std;
int CountZeros(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    int cnt=0;
    while(fact%10==0)
    {
        cnt++;
        fact=fact/10;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    cout<<CountZeros(n);
}