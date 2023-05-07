// To check if a number is palindrome or not 
// First conver the number into string then check the first and last index of string
#include<bits/stdc++>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
         string str=to_string(x);
        int s=0;
        int e=str.length()-1;
        while(s<e)
        {
            if(str[s++]!=str[e--])
            {
                return false;
            }
        }
        return true;
        
    }
};