#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        // appraoch-1 : use stack to store all the words and the pop and store to get the result
        string result;
        int i = 0, n = s.length();

        while (i < n)
        {

            while (i < n && s[i] == ' ')
                i++;
            if (i >= n)
                break;

            int j = i;

            // to detect characters and break when we detect any space
            while (j < n && s[j] != ' ')
                j++;

            // to take out the first word
            string sub = s.substr(i, j - i);

            if (result.length() == 0)
                result = sub;

            else
                result = sub + " " + result;

            i = j + 1;
        }

        return result;
    }
};