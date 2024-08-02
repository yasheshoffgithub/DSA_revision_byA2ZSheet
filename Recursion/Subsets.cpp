#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(int ind,vector<int>& nums,vector<int>& ans,vector<vector<int>>& res){
        res.push_back(ans);
        for(int i=ind;i<nums.size();i++){
            ans.push_back(nums[i]);
            helper(i+1,nums,ans,res);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        helper(0,nums,ans,res);
        return res;
    }
};