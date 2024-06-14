#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        std::vector<std::vector<int>> ans;

        for (int i = 0; i < n; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue; // Avoid duplicates for i
            for (int j = i + 1; j < n; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue; // Avoid duplicates for j
                int l = j + 1, r = n - 1;
                while (l < r)
                {
                    long long sum = (long long)nums[i] + nums[j] + nums[l] + nums[r]; // Use long long to prevent overflow
                    if (sum < target)
                    {
                        l++;
                    }
                    else if (sum > target)
                    {
                        r--;
                    }
                    else
                    {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                        while (l < r && nums[l] == nums[l - 1])
                            l++; // Avoid duplicates for l
                        while (l < r && nums[r] == nums[r + 1])
                            r--; // Avoid duplicates for r
                    }
                }
            }
        }
        return ans;
    }
};