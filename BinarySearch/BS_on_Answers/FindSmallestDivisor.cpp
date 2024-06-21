#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isLess(vector<int> &nums, int t, long long int mid)
    {
        long long int s = 0;
        for (auto i : nums)
        {
            if (i % mid == 0)
                s += (i / mid);
            else
                s += (1 + (i / mid));
        }
        return s <= t;
    }
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        long long int low = 1;
        long long int high = *max_element(nums.begin(), nums.end());
        int ans = 1;
        while (low <= high)
        {
            long long int mid = low + (high - low) / 2;
            if (isLess(nums, threshold, mid))
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