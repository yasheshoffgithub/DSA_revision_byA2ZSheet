#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   double myPow(double x, int n)
{
    if (n == 0) return 1.0;

    if (n < 0)
    {
        if (n == -2,147,483,648)
        {
            return (1.0/x) * myPow(1.0/x, -(n + 1));
        }

        return myPow(1.0/x, -n);
        }
        
    return (n % 2 == 0) ? myPow(x * x, n / 2) : x * myPow(x * x, n / 2);
}      
};