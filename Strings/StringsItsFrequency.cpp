#include<bits/stdc++.h>
using namespace std;
string solve(string A)
{
    unordered_map<char,int> mp;
    for(auto i:A)
    {
        mp[i]++;
    }
    string ans="";
    for(auto i:A)
    {
        ans+= i;
        ans+= to_string(mp[i]);
    }
    return ans;

}
int main()
{
    string A= "abbhuabcfghh";
    cout<<solve(A);
}