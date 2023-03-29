#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int cs;
    int ms;
    int front;
    int rear;
    public:
    Queue(int default_size=5)
    {
        ms = default_size;
        cs=0;
        front=0;
        rear=ms-1;
    }
    bool full()
    {
        return cs=ms;
    }
    bool empty()
    {
        return cs==0;
    }
    void push(int  data)
    {
        if(!full())
        {
            rear=(rear+1)%ms;
            arr[rear]=data;
            cs++;
        }
    }
    void pop()
    {
        if(!empty())
        {
            //take front pointer forward
            front=(front+1)%ms;
            cs--;
        }
    }
    int getfront()
    {
        return arr[front];
    }

};