#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &num)
    {
        // brute-force approach->O(n^3)-checking all possible subsets-TLE obv

        // better approach- using hashmap -TLE on last test case
        //  int n=num.size();
        //  unordered_map<int,int> mp;
        //  set<vector<int> > res;
        //  for(int i=0;i<n;i++) mp[num[i]]=i;
        //  for(int i=0;i<n-2;i++){
        //      for(int j=i+1;j<n-1;j++){
        //          int rem=-(num[i]+num[j]);
        //          if(mp.find(rem)!=mp.end() && i!=mp.find(rem)->second && j!=mp.find(rem)->second) {
        //              vector<int> temp={num[i],num[j],rem};
        //              sort(temp.begin(),temp.end());
        //              res.insert(temp);
        //          }
        //      }
        //  }
        //  vector<vector<int>> ans;
        //  for(auto s:res){
        //      vector<int> tempVec(s.begin(), s.end());
        //      ans.push_back(tempVec);
        //  }
        //  return ans;

        // optimal approach-SORTING and 2 pointers
        vector<vector<int>> res;
        int n = num.size();
        std::sort(num.begin(), num.end());
        for (int i = 0; i < n; i++)
        {
            if (i != 0 && num[i] == num[i - 1])
                continue;
            int j = i + 1;
            int k = num.size() - 1;
            while (j < k)
            {
                int sum = num[i] + num[j] + num[k];
                if (sum > 0)
                    k--;
                else if (sum < 0)
                    j++;
                else
                {
                    res.push_back({num[i], num[j], num[k]});
                    // move ahead now
                    j++;
                    k--;
                    // to avoid duplicates
                    while (j < k && num[j] == num[j - 1])
                        j++;
                    while (j < k && num[k] == num[k + 1])
                        k--;
                }
            }
        }
        return res;
    }
};