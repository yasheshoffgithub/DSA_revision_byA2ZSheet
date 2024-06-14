#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // here traversing from beginning is not possible as we have to do modification in nums1 only and we are given that last n places are filled with 0-take adv of that
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i];
                i--;
            }
            else
            {
                nums1[k--] = nums2[j];
                j--;
            }
            // no need to write special case for equality- consider it either with > or <
            //  else{
            //      nums1[k--]=nums1[i];
            //      i--;
            //      j--;
            //  }
        }
        while (i >= 0)
            nums1[k--] = nums1[i--];
        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
};