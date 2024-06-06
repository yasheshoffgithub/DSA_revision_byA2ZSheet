#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int ct = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] > nums[i])
                ct++;
            if (ct > 1)
                return false;
        }
        if (nums[nums.size() - 1] > nums[0]) // either only 1 place rotation or not possible
            ct++;
        return ct <= 1;
    }
};