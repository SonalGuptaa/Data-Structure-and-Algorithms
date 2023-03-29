#include<bits/stdc++.h>
#include "LinkedList.h"
using namespace std;

int main()
{
 stack<char> s;
 s.push('h');
 s.push('e');
 s.push('l');
 s.push('l');
 s.push('o');

 while(!s.empty())
 {
    cout<<s.top();
    s.pop();
 }

}