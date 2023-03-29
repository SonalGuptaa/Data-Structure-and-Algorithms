#include<bits/stdc++.h>
#include<stack>
using namespace std;
void insertAtBottom(stack<string> &books,string s)
{
    if(books.empty())
    {
        books.push(s);
        return;
    }
    //rec;
    string temp=books.top();
    books.pop();
    insertAtBottom(books,s);
    books.push(temp);
}
int main()
{
    stack<string> books;
    books.push("Python");
    books.push("ML");
    books.push("C++");
    books.push("Java");
    insertAtBottom(books,"Harry");
    while(!books.empty())
    {
        cout<<books.top();
        books.pop();
    }
}