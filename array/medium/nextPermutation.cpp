#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        // brute force approach would be to obtain all permutations, sort them and find next permutation
        // slight easier approach is to use built in function next_permutation

        // better approach-O(N) with 3 passes->finding the break point
        int n = nums.size();
        int idx = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int j = n - 1; j > idx; j--)
        {
            if (nums[j] > nums[idx])
            {
                swap(nums[idx], nums[j]);
                break;
            }
        }
        reverse(nums.begin() + idx + 1, nums.end());
    }
};