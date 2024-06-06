#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    void reverse(vector<int> &nums, int i, int j)
    {
        int li = i; // left;
        int ri = j;

        while (li < ri)
        {
            int temp = nums[li];
            nums[li] = nums[ri];
            nums[ri] = temp;

            li++;
            ri--;
        }
    }
    void rotate(vector<int> &nums, int k)
    {
        // 1st soln->extra space
        //  int n=nums.size();
        //  vector<int> temp(n);
        //  for(int i=0;i<n;i++)
        //     temp[(i+k)%n]=nums[i];
        //  nums=temp;

        // 2nd soln->no extra space
        k = k % nums.size();
        if (k < 0)
        { // for -ve k also it will work
            k += nums.size();
        }
        reverse(nums, 0, nums.size() - k - 1);
        reverse(nums, nums.size() - k, nums.size() - 1);
        reverse(nums, 0, nums.size() - 1);
    }
};