#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int prod = 1;
        int maxp = INT_MIN;
        if (n == 1)
            return nums[0];
        for (auto i : nums)
        {
            prod *= i;
            maxp = max(maxp, prod);
            if (prod == 0)
                prod = 1;
        }
        prod = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            prod *= nums[i];
            maxp = max(maxp, prod);
            if (prod == 0)
                prod = 1;
        }
        return maxp;
    }
};