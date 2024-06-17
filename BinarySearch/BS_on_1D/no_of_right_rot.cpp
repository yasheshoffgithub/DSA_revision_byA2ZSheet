#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMin(int nums[], int n)
    {
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (nums[mid] >= nums[s] && nums[mid] >= nums[e])
                s = mid + 1;
            else if (nums[mid] >= nums[s] && nums[mid] <= nums[e])
                return s;
            else
                e = mid;
            mid = s + (e - s) / 2;
        }
        return s;
    }
    int findKRotation(int arr[], int n)
    {
        // code here
        return findMin(arr, n);
    }
};