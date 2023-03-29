#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    //Base Case
    if(a%b==0)
    {
        return b;
    }
    //Recursion
    return GCD(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);

}