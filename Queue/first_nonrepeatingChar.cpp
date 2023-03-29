#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<char> q;
    int freq[27]={0}; //a-z
    char ch;
    cin>>ch;

     while(ch!='.')  //(.) means we have to stop
     {
        q.push(ch);
        freq[ch - 'a']++;
        //remove all chars from front of queue till you get a char with freq 1
        while(!q.empty())
        {
            int idx=q.front()-'a';
            if(freq[idx]>1)
            {
                q.pop();
            }
            else{
                cout<<q.front()<<endl;
                break;
            }
        }
        if(q.empty())
        {
            cout<<"-1"<<endl;
        }
        cin>>ch;
     }

    return 0;
}