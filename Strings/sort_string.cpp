#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR=26;
void sort(string s)
{
    int char_freq[MAX_CHAR];
    for(int i=0;i<26;i++)
    {
        char_freq[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {
        char_freq[s[i]-'a']++;
    }
    for (int i=0;i<MAX_CHAR;i++)
    {
        for(int j=0;j<char_freq[i];j++)
        {
            cout<<(char)('a'+i);
        }
    }
}
int main()
{
    string s;
    cout<<"Enter the name of string:"<<endl;
    cin>>s;
    sort(s);
    return 0;
}