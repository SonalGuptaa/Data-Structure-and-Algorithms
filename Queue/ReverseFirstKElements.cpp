#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.push(5);

    int k=3;
    int t1=k;
    stack<int> st;
    int s=q1.size();
    int r=s-k;
    while(t1--)
    {
        st.push(q1.front());
        q1.pop();
    }
    while(!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }
    while(r--)
    {
        q1.push(q1.front());
        q1.pop();
    }
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
}
