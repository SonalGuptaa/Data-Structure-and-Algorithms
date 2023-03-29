#include<bits/stdc++.h>
using namespace std;

//Output be like 5,4,3,2,1
int printNto1(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<endl;
    printNto1(n-1);
}