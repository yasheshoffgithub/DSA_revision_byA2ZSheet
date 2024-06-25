#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int beautySum(string s)
    {
        int sum = 0; //  to store ans;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            unordered_map<char, int> mp; // keep it here only to store freq of every possible substring
            for (int j = i; j < n; j++)
            {
                mp[s[j]]++; // storing every possible substring
                int maxFreq = 0, minFreq = INT_MAX;
                // find beauty
                for (auto it : mp)
                {
                    maxFreq = max(maxFreq, it.second);
                    minFreq = min(minFreq, it.second);
                }
                sum += (maxFreq - minFreq);
            }
        }
        return sum;
    }
};
