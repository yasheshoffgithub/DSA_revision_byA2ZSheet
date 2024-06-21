#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &arr, int n, int m, int mid)
{
    int scount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            scount++;
            if (scount > m || arr[i] > mid)
            { // if at any instant this occurs return false
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true; // if it comes out of the loop it means it's a valid allocation
}
int findPages(vector<int> &arr, int n, int m)
{
    // Write your code here.
    if (n < m)
        return -1;
    int s = 0;
    int sum = 0;
    for (auto i : arr)
        sum += i;
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}