#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minprice=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minprice=min(minprice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minprice);
        }
        return maxProfit;
    //     int maxPro=0; 
    //     for(int i=0;i<prices.size();i++)
    //     {
    //         for(int j=i+1;j<prices.size();j++)
    //         {
    //             if(prices[j]>prices[i])
    //             {
    //                  maxPro = max(prices[j] - prices[i], maxPro);
    //             }

    //         }
    //     }
    //    return maxPro;
    }
};

