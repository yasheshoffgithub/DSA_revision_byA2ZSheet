#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
        long long sum = 0;
        for (int i = 1; i < N; i++)
        {
            sum = max(sum, arr[i] + arr[i - 1]);
        }
        return sum;
    }
};