#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
    int res=max(a,b);
    while(true)
    {
        if(res%a==0 && res%b==0)
        {
            break;
        }
        res++;
    }
    return res;
}