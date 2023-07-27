#include<bits/stdc++.h>
using namespace std;
vector<int> sol(vector<int> test)
{
    int n=test.size();
    vector<int> ans;
    int sum;
    for(int i=0;i<n;i++) 
    {
        sum=0;
        int temp=test[i];
        while(temp!=0)
        {
            sum=sum+temp%10;
            // n=n/10;
            temp=temp/10;
        }
        ans.push_back(sum);
    }
    return ans;
}
int main()
{
    vector<int> test{43,345,20,987};
    vector<int> ans1;
    ans1=sol(test);
    for(auto i:ans1)
    {
        cout<<i<<" ";
    }
}