#include<iostream>
#include<string>
using namespace std;
bool is_subsets(string s1,string s2)
{
    int i=s1.length()-1;
    int j=s2.length()-1;
    while(i>=0 && j>=0)
    {
        if(s2[j] == s1[i])
        {
            j--;
            i--;
        }
        else
        {
            i--;
        }
    }
    if(j==-1)
    {
        return true;
    }
    return false;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<is_subsets(s1,s2);
}