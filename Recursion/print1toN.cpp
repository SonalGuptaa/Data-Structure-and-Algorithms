#include<bits/stdc++.h>
using namespace std;
int pritn1toN(int n)
{
    if(n==0)
    {
        return;
    }
    pritn1toN(n-1);
    cout<<n<<endl;
}