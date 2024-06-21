#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canLoad(vector<int> &weights, int days, long long int mid)
    {
        long long int currentLoad = 0;
        int d = 1; // Start with one day

        for (int i = 0; i < weights.size(); i++)
        {
            if (weights[i] > mid)
                return false; // If any single package exceeds mid, it's not possible

            if (currentLoad + weights[i] <= mid)
            {
                currentLoad += weights[i];
            }
            else
            {
                d++;
                currentLoad = weights[i];
                if (d > days)
                    return false;
            }
        }

        return true;
    }
    int shipWithinDays(vector<int> &weights, int days)
    {
        long long int low = 1;
        long long int high = 0;
        for (auto i : weights)
            high += i;
        int ans = 1;
        while (low <= high)
        {
            long long int mid = low + (high - low) / 2;
            if (canLoad(weights, days, mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};