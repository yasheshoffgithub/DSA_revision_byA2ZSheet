#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void helper(int i,int sum,int n,vector<int>& arr,vector<int>& sums){
        if(i==n){
            sums.push_back(sum);
            return;
        }
        helper(i+1,sum+arr[i],n,arr,sums);
        helper(i+1,sum,n,arr,sums);
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int> sums;
        helper(0,0,n,arr,sums);
        sort(sums.begin(),sums.end());
        return sums;
    }
};