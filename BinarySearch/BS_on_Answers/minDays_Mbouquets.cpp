#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Return the number of maximum bouquets that can be made on day mid.
    int getNumOfBouquets(vector<int> &bloomDay, int mid, int k)
    {
        int numOfBouquets = 0;

        int count = 0;
        for (int i = 0; i < bloomDay.size(); i++)
        {
            // If the flower is bloomed, add to the set. Else reset the count.
            if (bloomDay[i] <= mid)
            {
                count++;
            }
            else
            {
                count = 0;
            }

            if (count == k)
            {
                numOfBouquets++;
                count = 0;
            }
        }

        return numOfBouquets;
    }

    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int start = 0;
        int end = 0;
        for (int day : bloomDay)
        {
            end = max(end, day);
        }

        int minDays = -1;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            // no of bloomed flowers on day j(>i) will always be more than day i.
            if (getNumOfBouquets(bloomDay, mid, k) >= m)
            {
                minDays = mid;
                end = mid - 1; // check for min
            }
            else
            {
                start = mid + 1; // need to check on right half
            }
        }

        return minDays;
    }
};