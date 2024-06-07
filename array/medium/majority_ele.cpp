#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // 1st approach->Brute force
        //      if(nums.size()==1)
        //          return nums[0];
        //     sort(nums.begin(),nums.end());
        //     int a=1;
        //      for(int i=0;i<nums.size()-1;i++)
        //      {
        //          while(nums[i]==nums[i+1])
        //         {
        //             a++;
        //             i++;
        //             if(a>nums.size()/2)
        //              return nums[i];
        //         }
        //         a=1;
        //      //    if(a==0)
        //      }
        //     return 0;

        // 2nd approach->counting & searching
        //  unordered_map<int,int> mp;
        //  int k=nums.size()/2;
        //  for(auto i:nums) mp[i]++;
        //  for(auto it:mp){
        //      if(it.second>k) return it.first;
        //  }
        //  return -1;

        // 3rd approach->Moore’s Voting Algorithm
        int n = nums.size();
        int cnt = 0;
        int el;

        for (int i = 0; i < n; i++)
        {
            if (cnt == 0)
            {
                cnt = 1;
                el = nums[i];
            }
            else if (el == nums[i])
                cnt++;
            else
                cnt--;
        }
        return el;
    }
};