#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1="Apna Collegna";
    string str2="na";
    int found=str1.find(str2);
    if(found != string:: npos)
    {
        cout<<str2 << " is found in " <<str1<<" at index " <<found<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
}