#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int l = 0;
        int n = nums.size();
        int r = n - 1;
        int m = l + (r - l) / 2;
        while (l <= r)
        {
            if (m % 2 == 0)
            {
                if (m + 1 < n && nums[m] == nums[m + 1])
                    l = m + 2;
                else
                {
                    if (m - 1 >= 0 && nums[m] == nums[m - 1])
                        r = m - 2;
                    else
                        return nums[m];
                }
            }
            else
            {
                if (m - 1 >= 0 && nums[m] == nums[m - 1])
                    l = m + 1;
                else
                {
                    r = m - 1;
                }
            }
            m = l + (r - l) / 2;
        }
        return 0;
    }
};