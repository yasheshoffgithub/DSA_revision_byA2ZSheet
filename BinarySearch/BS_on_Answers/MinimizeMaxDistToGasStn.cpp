#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfGasStationsRequired(long double dist, vector<int> &stations)
    {
        int n = stations.size(); // size of the array
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            int numberInBetween = ((stations[i] - stations[i - 1]) / dist);
            if ((stations[i] - stations[i - 1]) == (dist * numberInBetween))
            {
                numberInBetween--;
            }
            cnt += numberInBetween;
        }
        return cnt;
    }
    double findSmallestMaxDist(vector<int> &stations, int k)
    {
        int n = stations.size(); // size of the array
        long double low = 0;
        long double high = 0;

        // Find the maximum distance:
        for (int i = 0; i < n - 1; i++)
        {
            high = max(high, (long double)(stations[i + 1] - stations[i]));
        }

        // Apply Binary search:
        long double diff = 1e-6;
        while (high - low > diff)
        {
            long double mid = (low + high) / (2.0);
            int cnt = numberOfGasStationsRequired(mid, stations);
            if (cnt > k)
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }
        return high;
    }
};