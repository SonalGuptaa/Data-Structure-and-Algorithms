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
    
    //Reverse these Queue
    stack<int> st;
    while(!q1.empty())
    {
        st.push(q1.front());
        q1.pop();
    }
    while(!st.empty())
    {
          q1.push(st.top());
          st.pop();
    }
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
}