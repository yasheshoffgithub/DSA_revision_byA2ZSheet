#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(int ind,vector<int>& nums,vector<int>& ans,vector<vector<int>>& res){
        
        res.push_back(ans);
        
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            ans.push_back(nums[i]);
            helper(i+1,nums,ans,res);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> ans;
        helper(0,nums,ans,res);
        return res;
    }
};