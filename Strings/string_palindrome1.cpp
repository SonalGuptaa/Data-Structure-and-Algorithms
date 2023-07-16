#include<bits/stdc++.h>
using namespace std;
/*string ispalindrome(string s)
{
    string p=s;
    reverse(p.begin(),p.end());
    if(p == s)
    {
        return "true";
    }
    else
    {
        return "false";
    }
} */
int main()
{
   /* string s="madam";
    cout<<ispalindrome(s); */
    int x;
    cin>>x;
    int temp=x;
    int sum=0,r;
    bool flag=false;
    while(x>0)
    {
    
        r=x%10;
        sum=(sum*10)+r;
        x=x/10;
        if(temp==sum)
        {
            flag=true;
        }
        else
        {
            flag=false;
        }
    }
    
    if(x<0){
        cout<<"No"<<endl;
    }
    else{
        if(flag==true){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }


}