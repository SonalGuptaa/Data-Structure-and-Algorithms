#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string input){
    stack<char> s;
    for(auto ch:input)
    {
        switch(ch)
        {
            case'(':
            case'{':
            case'[':  s.push(ch);
                      break;
            case')': if(!s.empty() && s.top()=='(' ){
                s.pop();
            }
            else{
                return false;
            }
            break;
            case'}': if(!s.empty() && s.top()=='{'){
                s.pop();
            }
            else{
                return false;
            }
            break;
            case']': if(!s.empty() && s.top()=='['){
                s.pop();
            }
            else{
                return false;
            }
            break; 
            default:continue;
       }
    }
    if(s.empty())
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
  string s= "((a+b)*x-d)";
  if(isBalanced(s))
  {
    cout<<"Balanced";
  }
  else
  {
    cout<<"Not Balanced";
  }
}