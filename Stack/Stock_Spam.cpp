#include<bits/stdc++.h>
using namespace std;
void stockSpan(int price[],int n,int span[])
{
    stack<int> s;
    s.push(0);
    span[0]=1;
    for(int i=1;i<n-1;i++)
    {
        int current_price=price[i];
        //topmost element higher tahn current price
        while(!s.empty() and price[s.top()]<=current_price)
        {
            s.pop();
        }
        if(!s.empty())
        {
        int prev_highest=s.top();
        span[i]=i=prev_highest;
        }
        else
        {
            span[i]=i+1;
        }

        s.push(i);
}
int main()
{
  int price ={100,80,60,70,60,75,85};
  int n=sizeof(price)/sizeof(int);
  int span[100000]={0};
  stockSpan(price,n,span);
  return 0;

}