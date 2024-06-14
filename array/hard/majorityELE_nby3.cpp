#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        // brute force is to count using nested loops
        // better approach ->using hashmap && set to store unique values
        //    unordered_map<int,int> mp;
        //    int n=nums.size();
        //    set<int> temp;
        //    for(auto i:nums){
        //     mp[i]++;
        //     if(mp[i]> n/3 ) temp.insert(i);
        //    }
        //    vector<int> ans;
        //    for(auto i:temp) ans.push_back(i);
        //    return ans;

        // optimal approach- similar to maj element1
        vector<int> ans;
        int cnt1 = 0, cnt2 = 0;
        int ele1 = INT_MIN, ele2 = INT_MIN;
        for (auto i : nums)
        {
            if (cnt1 == 0 && i != ele2)
            {
                ele1 = i;
                cnt1++;
            }
            else if (cnt2 == 0 && i != ele1)
            {
                ele2 = i;
                cnt2++;
            }
            else if (i == ele1)
                cnt1++;
            else if (i == ele2)
                cnt2++;
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        int n = nums.size();
        cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == ele1)
                cnt1++;
            if (nums[i] == ele2)
                cnt2++;
        }

        if (cnt1 > n / 3)
            ans.push_back(ele1);
        if (cnt2 > n / 3)
            ans.push_back(ele2);
        return ans;
    }
};