#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        // 1st approach->brute force:checking all possibilties
        // 2nd approach->using pre subarr sum to check if it exists or not
        // optimal approach is to store prefix sum ina map to search the remaining sum
        unordered_map<int, int> mp;
        int sum = 0, ans = 0;
        mp[sum] = 1;
        for (auto it : nums)
        {
            sum += it;
            int find = sum - k;
            if (mp.find(find) != mp.end())
            {
                ans += mp[find];
            }
            mp[sum]++;
        }
        return ans;
    }
};