#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    void helper(int n,string ans,vector<string>& res){
        if(ans.length()==n){
            res.push_back(ans);
            return;
        }
        helper(n,ans+"0",res);
        if(ans.back()!='1'){
            helper(n,ans+"1",res);
        }
    }
    vector<string> generateBinaryStrings(int num){
        //Write your code
        vector<string> res;
        string ans="";
        helper(num,ans,res);
        return res;
    }
};