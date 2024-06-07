#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // 1st approach->O(n^2)-BRUTE FORCE
        //    vector<int> output;
        //    int n=nums.size();
        //   for(int i=0;i<n-1;i++)
        //   {
        //       for(int j=i+1;j<n;j++)
        //       {
        //           if(nums[i]+nums[j]==target)
        //           {
        //              output.push_back(i);
        //              output.push_back(j);
        //             break;
        //           }
        //       }
        //   }
        //   return output;

        // 2nd approach->hashmaps
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]] = i;
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(target - nums[i]) != mp.end() && i != mp.find(target - nums[i])->second)
            {
                // auto it=mp.find(target-i);
                ans.push_back(i);
                ans.push_back(mp.find(target - nums[i])->second);
                return ans;
            }
        }
        return {-1, -1};
    }
};