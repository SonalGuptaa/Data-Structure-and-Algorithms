#include<bits/stdc++.h>
using namespace std;
int count(vector<int> l1,vector<int> l2)
{
    unordered_map<int,int> m1;
    unordered_map<int,int> m2;
    for(auto i:l1)
    {
        m1[i]++;
    }
    for(auto j:l2)
    {
        m2[j]++;
    }
    int ans=0;
    for(auto i:m1)
    {
        // if(m1[i.first] != )
        if(m2[i.first]==0)
        {
            ans+=i.second;
        }
    }
      for(auto i:m2)
    {
        // if(m1[i.first] != )
        if(m1[i.first]==0)
        {
            ans+=i.second;
        }
    }
    return ans;
    // int n1=l1.size();
    // int n2=l2.size();
    // int ans=0;
    // set<int> s1;
    // set<int> s2;
    // for(auto i:l1)
    // {
    //     s1.insert(i);
    // }
    // for(int j:l2)
    // {
    //     s2.insert(j);
    // }
    // for(auto i:s1)
    // {
    //     if(s2.find(i)==s2.end())
    //     ans++;
    // }
    // for(auto i:s2)
    // {
    //     if(s1.find(i)==s1.end())
    //     ans++;
    // }
    // return ans;
    // set<int> the_intersection;  // Destination of intersect
    // set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), std::inserter(the_intersection, the_intersection.end()));
    // // return the_intersection.size();
    // int n=the_intersection.size();
    // return (n1+n2)-n;
}
int main()
{
    vector<int> l1{1,1,2,3,4,5,5,7,6,9,10}; 
    vector<int> l2{11,12,13,4,5,6,7,18,19,20};
    int s=count(l1,l2);
    cout<<s<<endl;
}