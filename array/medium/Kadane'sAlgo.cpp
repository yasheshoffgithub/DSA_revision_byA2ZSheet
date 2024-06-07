#include "../bits/stdc++.h"
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          //brute-force approach:find all subarrays-O(N^3)
          //better approach- just store the sum of prev subarray and add current element to avoid inner loop-O(N^2)
          int n=nums.size();
          int maxi=INT_MIN;
        //   for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         maxi=max(maxi,sum);
        //     }
        //   }
        //   return maxi;

          //optimal approach:Kadane's algo-O(N)
          int sum=0;
          for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0) sum=0;
          }
        return maxi;
    }
};