#include "../bits/stdc++.h"
using namespace std;
// there can be many variations to this problem and using a formula based approach can be useful
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ret;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++)
            {
                row[j] = ret[i - 1][j] + ret[i - 1][j - 1];
            }
            ret.push_back(row);
        }
        return ret;
    }
};