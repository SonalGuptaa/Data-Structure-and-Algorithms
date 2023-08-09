#include<bits/stdc++.h>
using namespace std;
int repeated(string s)
{
    unordered_map<char,int> mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    int cnt=0;
    for(auto i:mp)
    {
        if(i.second==1)
        {
            cnt++;
        }
    }
    return cnt;

}
int main()
{
    string s= "alphaadida";
    int result=repeated(s);
    cout<<result<<" "<<endl;
}