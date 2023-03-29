#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &s,int temp)
{
    if(s.empty())
    {
        s.push(temp);
        return;
    }
    int t=s.top();
    s.pop();
    insertAtBottom(s,temp);
    s.push(t);

}
void reverse(stack<int> &n)
{
  if(n.empty())
  {
    return;
  }
  int t=n.top();
  n.pop();
  reverse(n);
  insertAtBottom(n,t);
}
int main()
{
    stack<int> n;
    n.push(4);
    n.push(5);
    n.push(6);
    // n.push(4);
    // n.push(5);
    // reverse(n);
    while(!n.empty())
    {
        cout<<n.top();
        n.pop();
    }


}