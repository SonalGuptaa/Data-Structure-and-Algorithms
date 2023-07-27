#include<bits/stdc++.h>
using namespace std;
vector<int> subsets(string s,string curr,int i)
{
    vector<int> ans;
    int n=s.size();
    if(i==n)
    {
        cout<<curr<<" ";
        // ans.push_back(curr);
        return;
    }
    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}
int main()
{
    string s="abc";
    string curr="";
     subsets(s,curr,0);
    // vector<int> temp= subsets(s,curr,0);
    // for(auto i:temp)
    // {
    //     cout<<i<<" ";
    // }
}