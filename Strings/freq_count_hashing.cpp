#include<bits/stdc++.h>
using namespace std;
void freq_count(string s)
{
    unordered_map<char,int> freq;
    for(char x:s)
    {
        freq[x]++;
    }
    for(char x:s)
    {
        if(freq[x]!=0)
        {
            cout<<x<<freq[x]<<" ";
            freq[x]=0;
        }
    }
}
int main()
{
    string s;
    cin>>s;
    freq_count(s);
    return 0;
}