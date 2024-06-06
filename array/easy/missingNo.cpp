#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        // 1st approach->nlogn
        //     sort(nums.begin(),nums.end());
        //     for(int i=0;i<nums.size();i++){
        //         if(nums[i]!=i)
        //            return i;
        //     }
        //     return nums.size();

        // 2nd approach->
        vector<int> temp;
        int n = nums.size();
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            temp.push_back(i);
            x ^= nums[i];
        }
        temp.push_back(n);
        for (int j = 0; j <= n; j++)
            x ^= temp[j];
        return x;
    }
};