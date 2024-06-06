#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int i = 0;
        int j = 0;
        int ans = 0;
        while (i <= j && j < nums.size())
        {
            while (j < nums.size() && nums[j] == 1)
            {
                ans = max(ans, j - i + 1);
                j++;
            }
            while (j < nums.size() && nums[j] != 1)
            {
                j++;
            }
            i = j;
        }
        return ans;
    }
};