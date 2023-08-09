#include<bits/stdc++.h>
using namespace std;
int maxdigit(int n)
{
    int maxi=-1;
    int digit;
    while(n>0)
    {
        digit=n%10;
        if(digit>maxi)
        {
            maxi=digit;
        }
        n=n/10;
    }
    return digit;
}
int main()
{
    int n=32387634;
    int result=maxdigit(n);
    cout<<result<<" ";
}