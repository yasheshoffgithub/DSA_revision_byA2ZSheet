#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        int max1 = 0;
        int max2 = -1;
        for (int i = 0; i < n; i++)
        {
            max1 = max(max1, arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max2 && arr[i] != max1)
                max2 = arr[i];
        }
        return max2;
    }
};