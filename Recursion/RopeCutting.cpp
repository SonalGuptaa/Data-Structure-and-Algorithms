#include<bits/stdc++.h>
using namespace std;
int MaxCuts(int n,int a,int b,int c)
{
    if(n==0)
    {
        return 0;
    }
    if(n<=-1)
    {
        return -1;
    }
    int res=max(MaxCuts(n-a,a,b,c),
                max(MaxCuts(n-b,a,b,c),
                MaxCuts(n-c,a,b,c)));
    if(res==-1)
       return -1;
    return res+1;
}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<MaxCuts(n,a,b,c);

}