#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(int i,int target,vector<int>& candidates,vector<vector<int>>& res,vector<int>& ans){
        if(i==candidates.size()){
            if(target==0) res.push_back(ans);
            return;
        }
        if(candidates[i]<=target){
            ans.push_back(candidates[i]);
            helper(i,target-candidates[i],candidates,res,ans);
            ans.pop_back();
        }
        helper(i+1,target,candidates,res,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        helper(0,target,candidates,res,ans);
        return res;
    }
};