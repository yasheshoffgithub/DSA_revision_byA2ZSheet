#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int myAtoi(string s)
    {
        int n = s.length();
        if (n == 0)
            return 0;
        int i = 0;
        bool neg = false;
        string t = "";
        while (i < n && s[i] == ' ')
            i++;
        if (i < n)
        {
            if (s[i] == '-')
            {
                neg = true;
                i++;
            }
            else if (s[i] == '+')
                i++;
        }
        while (i < n && (s[i] > 47 && s[i] <= 57))
        {
            t += s[i];
            i++;
        }
        int dig = t.length();
        if (dig == 0)
            return 0;
        int ans = 0;
        for (int j = 0; j < dig; j++)
        {
            int digit = t[j] - '0';
            if (ans > (INT_MAX / 10) || (ans == (INT_MAX / 10) && digit > 7))
                return neg ? INT_MIN : INT_MAX;
            ans = (ans * 10) + digit;
        }
        if (neg)
            return -1 * ans;
        return ans;
    }
};
