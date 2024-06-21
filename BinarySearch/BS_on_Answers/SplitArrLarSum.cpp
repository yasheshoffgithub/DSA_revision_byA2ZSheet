#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isLess(vector<int> &nums, int k, int mid)
    {
        int cnt = 1;
        long long int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (sum + nums[i] <= mid)
            {
                sum += nums[i];
            }
            else
            {
                cnt++;
                if (cnt > k || nums[i] > mid)
                    return false;
                sum = nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int> &nums, int k)
    {
        int low = 0;
        int high = 0;
        int ans = 0;
        for (auto i : nums)
            high += i;
        // sort(nums.begin(),nums.end());
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (isLess(nums, k, mid))
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