#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
    void helper(int idx,string s,vector<string>& ans,vector<vector<string>>& res){
        if(idx==s.length()){
            res.push_back(ans);
            return;
        }
        for(int i=idx;i<s.length();i++){
            if(isPalindrome(s,idx,i)){
                ans.push_back(s.substr(idx,i-idx+1));
                helper(i+1,s,ans,res);
                ans.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ans;
        helper(0,s,ans,res);
        return res;
    }
};