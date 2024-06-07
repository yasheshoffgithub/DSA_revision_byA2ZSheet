#include "../bits/stdc++.h"
using namespace std;
class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int a[], int n)
    {
        // Code here
        vector<int> backward(n, 0);
        vector<int> ans;
        int maxb = 0;
        for (int i = 0; i < n; i++)
        {
            maxb = max(maxb, a[n - 1 - i]);
            backward[n - 1 - i] = maxb;
        }
        for (int i = 0; i < n; i++)
        {
            if (backward[i] <= a[i])
                ans.push_back(a[i]);
        }
        return ans;
    }
};