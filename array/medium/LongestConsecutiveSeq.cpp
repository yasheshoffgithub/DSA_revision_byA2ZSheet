#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        set<int> s;
        for (auto i : nums)
            s.insert(i);
        int maxi = 1;
        for (auto i : s)
        {
            int cnt = 1;
            if (s.count(i - 1) != 0)
                continue;
            else
            {
                while (s.count(i + 1) != 0)
                {
                    cnt++;
                    maxi = max(maxi, cnt);
                    i++;
                }
            }
        }
        return maxi;
    }
};