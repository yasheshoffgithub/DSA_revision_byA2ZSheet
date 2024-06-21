#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canEat(vector<int> &piles, int h, long long int mid)
    {
        long long int time = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++)
        {
            if (mid >= piles[i])
                time += 1;
            else
            {
                if (piles[i] % mid == 0)
                    time += (piles[i] / mid);
                else
                    time += (1 + (piles[i] / mid));
            }
        }
        return (time <= h);
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        long long int low = 1;
        long long int high = *max_element(piles.begin(), piles.end());
        long long int ans = 1;
        while (low <= high)
        {
            long long int mid = low + (high - low) / 2;
            if (canEat(piles, h, mid))
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