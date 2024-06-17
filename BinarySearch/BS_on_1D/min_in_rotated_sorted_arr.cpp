#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (nums[mid] >= nums[s] && nums[mid] >= nums[e])
                s = mid + 1;
            else if (nums[mid] >= nums[s] && nums[mid] <= nums[e])
                return nums[s];
            else
                e = mid;
            mid = s + (e - s) / 2;
        }
        return nums[s];
    }
};