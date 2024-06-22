#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int s = 0;
        int e = row * col - 1;
        int mid = s + (e - s) / 2;
        // we are visualising 2d array AS 1d array
        while (s <= e)
        {
            if (matrix[mid / col][mid % col] == target)
                return 1;
            if (matrix[mid / col][mid % col] < target)
                s = mid + 1;
            if (matrix[mid / col][mid % col] > target)
                e = mid - 1;
            mid = s + (e - s) / 2;
        }
        return 0;
    }
};