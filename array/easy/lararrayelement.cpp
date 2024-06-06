#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxx = INT_MIN;
        for (auto i : arr)
        {
            maxx = max(maxx, i);
        }
        return maxx;
    }
};