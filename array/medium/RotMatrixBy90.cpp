#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        // 1st approach->use another matrix to store the roated matrix which we can do v easily
        // 2nd approach- do it in place
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            int s = 0;
            int e = n - 1;
            while (s <= e)
                swap(matrix[i][s++], matrix[i][e--]);
        }
    }
};