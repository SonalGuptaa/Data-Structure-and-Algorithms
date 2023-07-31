#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> duplicates;
    vector<int> nums={6,7,8,2,6,2,6,7};
    int n=nums.size();
     for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    duplicates.push_back(nums[i]);
                    break; // Stop inner loop since duplicate is found.
                }
            }
        }
    set<int> s;
    for(auto i:duplicates)
    {
        s.insert(i);
    }
    for(auto i:s)
    {
        cout<<i<<" ";
    }
}
 
        