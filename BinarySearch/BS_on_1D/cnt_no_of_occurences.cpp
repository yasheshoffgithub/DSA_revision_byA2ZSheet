#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int lastOcc(int nums[], int n, int target)
    {
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        int ans = -1;
        while (s <= e)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                s = mid + 1;
            }
            if (nums[mid] > target)
            {
                e = mid - 1;
            }
            if (nums[mid] < target)
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
    int firstOcc(int nums[], int n, int target)
    {
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        int ans = -1;
        while (s <= e)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                e = mid - 1;
            }
            if (nums[mid] > target)
            {
                e = mid - 1;
            }
            if (nums[mid] < target)
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
    int count(int arr[], int n, int x)
    {
        // code here
        // int cnt=0;
        int i = firstOcc(arr, n, x);
        int j = lastOcc(arr, n, x);
        if (i == -1 && j == -1)
            return 0;
        else if (i == -1 || j == -1)
            return 1;
        return j - i + 1;
    }
};