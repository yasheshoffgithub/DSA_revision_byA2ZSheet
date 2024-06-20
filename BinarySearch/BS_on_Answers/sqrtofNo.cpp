#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long int floorSqrt(long long int x)
    {
        // Your code goes here
        long long int start = 1;
        long long int end = x;
        long long int mid = start + (end - start) / 2;
        while (start <= end)
        {
            if (mid * mid == x)
                return mid;
            if (mid * mid > x)
                end = mid - 1;
            else
                start = mid + 1;
            mid = start + (end - start) / 2;
        }
        return floor(sqrt(x));
    }
};