#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1,q2;
    public:
    void push(int x)
    {
        if(q1.empty())
        {
            q1.push(x);
        }
        else
        {
            q2.push(x);
        }
    }
    void pop()
    {
        //This is a queue soo the rear element of queue is the top element if stack
        if(q1.empty()) //Elements are in q2
        {
            while(!q2.empty())
            {
                int front=q2.front();
                q2.pop();
                if(q2.empty())
                {
                    break;
                }
                q1.push(front);
            }
        }
        if(q2.empty()) //Elememts are q1
        {
            while(!q1.empty())
            {
                int front=q1.front();
                q1.pop();
                if(q1.empty())
                {
                    break;
                }
                q2.push(front);
            }
        }
    }
    int top()
    {
        if(q1.empty())
        {
            while(!q2.empty())
            {
                int front=q2.front();
                q2.pop();
                q1.push(front);
                if(q2.empty())
                {
                    return front;
                }
            }
        }
        if(q2.empty())
        {
            while(!q1.empty())
            {
                int front=q1.front();
                q1.pop();
                q2.push(front);
                if(q1.empty())
                {
                    return front;
                }
            }
        }
    }
    bool empty()
    {
        return q1.empty() and q2.empty();
    }

};
int main()
{
  Stack s;
  s.push(1);
  s.push(2);
  s.pop();
  s.push(3);
  s.push(4);
  s.push(5);
  while(!s.empty())
  {
    cout<<s.top();
    s.pop();
  }
}