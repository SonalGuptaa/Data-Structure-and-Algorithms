#include<iostream>
#include<string>
using namespace std;
void print_substring(string s,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<s[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    string s="hello";
    int n =s.size();
    print_substring(s,n);
}