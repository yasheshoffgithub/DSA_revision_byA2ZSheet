#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        // it can be done simply without stack, using a counter to count no of opened parenthesis
        string res;
        int opened = 0;
        for (char c : s)
        {
            // both these statements will avoid adding already primitive strings bcz either opened will be 0 or 1 on that case
            if (c == '(' && opened++ > 0)
                res += c; // if it's not the first opened
            if (c == ')' && opened-- > 1)
                res += c; // if not more than 1 opened
        }
        return res;
    }
};