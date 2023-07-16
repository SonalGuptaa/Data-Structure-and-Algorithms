#include<bits/stdc++.h>
using namespace std;
void sort(string s)
{
    sort(s.begin(),s.end());
    {
        cout<<s;
    }
}
int main()
{
    string s;
    cout<<"Enter the string you want to sort: ";
    cin>>s;
    sort(s);
}