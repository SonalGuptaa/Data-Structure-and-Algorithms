#include<bits/stdc++.h>
using namespace std;
bool checkRedundant(string str)
{
    stack<char> s;
    for(char ch: str)
    {
        if(ch != ')')
        {
            s.push(ch); //a,b,+,-,/,*,(.....          
        }
        else{
            bool operator_found=false;
            while(!s.empty() and s.top()!='(')
            {
                // s.pop();
                char top=s.top();
                if(top=='+' or top=='-' or top=='*' or top=='/')
                {
                    operator_found=true;
                }
                s.pop();
            }
            s.pop();
            if(operator_found== false)
            {
                return true;

            }
        }
    }
    return false;
}
int main()
{
    string str = "((a+b))";
    if(checkRedundant(str))
    {
        cout<<"Contains Redundant Parenthesis";
    }
    else{
        cout<<"Doesn't contain Redundant Parenthesis";
    }

}