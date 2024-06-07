#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        // vector<int> ans;
        //  for(auto i:nums){
        //      if(i>0){
        //          ans.push_back(i);
        //          ans.push_back(0);
        //      }
        //  }
        //  int idx=1;
        //  for(auto i:nums){
        //      if(i<0 && idx<nums.size()){
        //          ans[idx]=i;
        //          idx+=2;
        //      }
        //  }
        //  return ans;
        vector<int> ans;
        int n = nums.size();
        int i = 0, j = 0;
        while (i < n && j < n)
        {
            while (i < n && nums[i] < 0)
                i++;
            while (j < n && nums[j] > 0)
                j++;
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        return ans;
    }
};