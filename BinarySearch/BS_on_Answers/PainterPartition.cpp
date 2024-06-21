#include <bits/stdc++.h>
using namespace std;
bool canPaint(vector<int> &boards, int k, int mid)
{
    int p = 1;
    int sum = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        if (sum + boards[i] <= mid)
            sum += boards[i];
        else
        {
            p++;
            if (p > k || boards[i] > mid)
                return false;
            sum = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int low = 1;
    int high = 0;
    for (auto i : boards)
        high += i;
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (canPaint(boards, k, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}