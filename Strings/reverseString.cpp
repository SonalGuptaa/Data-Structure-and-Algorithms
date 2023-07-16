#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ans ="Hello";
    int n =ans.size();
    stack<char> s;
    for(auto i:ans)
    {
        s.push(i);
    }
    for(int i=0;i<n;i++)
    {
        ans[i]=s.top();
        s.pop();
    }
    cout<<ans;
    // int n =ans.size();
    // int s=0;
    // int l=n-1;
    // while(s<l)
    // {
    //     swap(ans[s],ans[l]);
    //     s++;
    //     l--;
    // }
    // cout<<ans<<endl;
}