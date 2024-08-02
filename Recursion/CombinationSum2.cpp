#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(int i,int target,vector<int>& candidates,vector<vector<int>>& res,vector<int>& ans){
        if(target==0){
            res.push_back(ans);
            return;
        } 
        for(int j=i;j<candidates.size();j++){
            if(j>i && candidates[j]==candidates[j-1]) continue;

            if(candidates[j]>target) break;
            ans.push_back(candidates[j]);
            helper(j+1,target-candidates[j],candidates,res,ans);
            ans.pop_back();
        }        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        sort(candidates.begin(),candidates.end());
        helper(0,target,candidates,res,ans);
        return res;
    }
};