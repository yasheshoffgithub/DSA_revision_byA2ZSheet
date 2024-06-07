#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    { // Brute force approach to check all possibilities-O(N^2)
        // int n=prices.size();
        // int maxp=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         maxp=max(maxp,prices[j]-prices[i]);
        //     }
        // }
        // return maxp;

        // better solution, update mini CP && maxp in one pass
        int mini = prices[0];
        int profit = 0;
        int n = prices.size();
        for (int i = 1; i < n; i++)
        {
            profit = max(profit, prices[i] - mini);
            mini = min(mini, prices[i]);
        }
        return profit;
    }
};