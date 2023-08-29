#include<bits/stdc++.h>
using namespace std;
int countDigits(int n)
{
    int cnt=0;
    while(n>0)
    {
        n=n/10;
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    int x=countDigits(n);
    cout<<"The number of digits is :"<<x<<endl;
}