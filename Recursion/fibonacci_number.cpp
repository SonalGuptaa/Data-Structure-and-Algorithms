#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<ans;
}
// int fibo(int n)
// {
// //Base Case 
// if(n==0 || n==1)
// {
//     return n;
// }
// //Recursive Case
// int f1=fibo(n-1);
// int f2=fibo(n-2);
// int ans=f1+f2;
// return ans;
// }