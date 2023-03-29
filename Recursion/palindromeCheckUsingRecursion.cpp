#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &str,int s,int e)
{
    if(s>=e)
    return true;

    if(str[s]==str[e] && isPalindrome(str,s+1,e-1))
    {
        return true;
    }
    return false;
}
int main()
{
    string str= "abba";
    // start=0,end=n-1
    cout<<isPalindrome(str,0,3);


}