#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int rev;
     int ans=0;
     while(n!=0){
          int rev=n%10;
          ans=ans*10+rev;
          n=n/10;
     }
     cout<< ans;
     
}