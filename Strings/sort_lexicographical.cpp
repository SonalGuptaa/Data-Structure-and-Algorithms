#include<bits/stdc++.h>
using namespace std;
string print(string str[],int n)
{
     //Use Bubble sort 
    for(int times=1;times<n;times++)
    {
        for(int j=0;j<n-times-1;j++)
        {
            if(str[j]>str[j+1])
            {
                swap(str[j],str[j+1]);
            }
        }
    }
    cout<<"Lexicographical order: ";
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<" "<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,str[i]);
    }
    print(str,n);
    return 0;
}