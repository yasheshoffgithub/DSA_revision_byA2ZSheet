#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int isSubstring(string s1, string s2)
    {
        // using find method to check if s1 is
        // a substring of s2
        if (s2.find(s1) != string::npos)
            return s2.find(s1);
        return -1;
    }
    bool rotateString(string s, string goal)
    {
        if (s.length() != goal.length())
            return false;
        string t = s + s;
        int res = isSubstring(goal, t);
        if (res != -1)
            return true;
        return false;
    }
};