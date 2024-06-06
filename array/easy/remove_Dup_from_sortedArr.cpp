#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // 1st soln.
        //  vector<int> ans;
        //  ans.push_back(nums[0]);
        //  int temp=ans[0];
        //  for(int i=0;i<nums.size();i++){
        //      if(nums[i]!=temp){
        //          ans.push_back(nums[i]);
        //          temp=nums[i];
        //          }
        //  }
        //  int k=ans.size();
        //  for(int i=0;i<k;i++){
        //      nums[i]=ans[i];
        //  }
        //  return k;

        // 2nd soln.
        //  map<int,int> mp;
        //  for(auto it: nums){
        //      mp[it]++;
        //  }
        //  int k=0;
        //  for(auto it:mp){
        //      if(k<mp.size()){
        //          nums[k]=it.first;
        //           k++;
        //      }
        //      else break;
        //  }
        //  return k;

        // 3rd soln.(without extra space)
        int i = 0, j = 1;
        int n = nums.size();
        while (j < n)
        {
            if (nums[i] == nums[j] && j < n)
                j++;
            else
            {
                i++;
                nums[i] = nums[j];
                j++;
            }
        }
        return i + 1;
    }
};