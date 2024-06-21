#include <bits/stdc++.h>
using namespace std;
// this is the same question as minimum magnetic force between 2 balls problem on LC.
// hence used the same helper function
bool canPlace(int x, vector<int> &position, int m)
{
    int prevpos = position[0];
    int ballsplaced = 1;
    for (int i = 1; i < position.size() && ballsplaced < m; i++)
    {
        // check for each position
        int currpos = position[i];
        if (currpos - prevpos >= x)
        {
            ballsplaced += 1;
            prevpos = currpos;
        }
    }
    // if all balls can be placed with a gap of x
    return ballsplaced == m;
}
int main()
{
    int t;
    cin >> t;
    int n, m;
    cin >> n >> m;
    vector<int> position;
    for (int i = 0; i < n; i++)
    {
        int pos;
        cin >> pos;
        position.push_back(pos);
    }
    sort(position.begin(), position.end()); // binary search to be applied on sorted array only
    while (t--)
    {

        // int n=position.size();
        int low = 1;                                  // minimum gap that should be
        int high = ceil(position[n - 1] / (m - 1.0)); // max gap that is possible without checking
        int answer = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            // check if we can place balls with gap of mid
            if (canPlace(mid, position, m))
            {
                answer = mid;
                // discard th left half as it can't be maximum
                low = mid + 1;
            }
            else
                high = mid - 1; // discard the right half bcz it won't be possible
        }
        cout << answer;
    }
}