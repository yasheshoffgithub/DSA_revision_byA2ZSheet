#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // 1st approach->basic sorting of array(although it is not allowed)
        // sort(nums.begin(),nums.end())

        // 2nd-approach->counting followed by overwriting
        //  map<int,int> mp;
        //  for(auto i:nums) mp[i]++;
        //  int i=0;
        //  for(auto it:mp){
        //      int ct=it.second;
        //      while(ct){
        //          nums[i]=it.first;
        //          ct--;
        //          i++;
        //      }
        //  }

        // 3rd-approach->Variation of Dutch National flag algorithm
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
};