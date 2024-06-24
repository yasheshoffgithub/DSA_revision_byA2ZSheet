#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int m1[256] = {0}, m2[256] = {0}, n = s.size();
        for (int i = 0; i < n; ++i)
        {
            if (m1[s[i]] != m2[t[i]])
                return false; // bcz order needs to be same so indices of similar characters must be same
            m1[s[i]] = i + 1; // i+1 is done as first char will remain 0
            m2[t[i]] = i + 1;
        }
        return true;
    }
};