#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(int x)
{
    //to_string() converts integer to string
    string str=to_string(x);
    int start=0;
    int end=str.length()-1;
    while(start<end)
    {
        if(str[start++]!=str[end--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    bool y=isPalindrome(x);
    if(y==1)
    {
        cout<<x<<" Is a palindrome";
    }
    else
    {
        cout<<x<< "is not a palindrome";
    }

}