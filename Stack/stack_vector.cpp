#include<bits/stdc++.h>
#include "stackVector.h"
using namespace std;
int main()
{
    Stack<int> n;
    n.push(1);
    n.push(2);
    n.push(3);
    n.push(4);
    n.push(5);
    while(!n.empty())
    {
        cout<<n.top();
        n.pop();
    }
}