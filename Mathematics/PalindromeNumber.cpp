#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    int rev=0;
    int temp=n;
    while(temp!=0)
    {
        int last=temp%10;
        rev = rev*10+last;
        temp=temp/10;
    }
    return(rev==n);
}
int main()
{
    int n;
    cin>>n;
    // cout<<isPalindrome(n);
     int x = isPalindrome(n);
    if(x==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
 
}

  