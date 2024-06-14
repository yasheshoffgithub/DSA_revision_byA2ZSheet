#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        int prevStart = intervals[0][0];
        int prevEnd = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (prevEnd >= intervals[i][0])
            {
                prevEnd = max(prevEnd, intervals[i][1]);
                // ans.push_back({prevStart,prevEnd});
            }
            else
            {
                ans.push_back({prevStart, prevEnd});
                // update checkpoints
                prevStart = intervals[i][0];
                prevEnd = intervals[i][1];
            }
        }
        // push the last interval
        ans.push_back({prevStart, prevEnd});
        return ans;
    }
};