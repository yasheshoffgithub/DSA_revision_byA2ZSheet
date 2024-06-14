#include "../bits/stdc++.h"
using namespace std;
class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int n)
    {
        // code here

        long mySum = (n * (n + 1L)) / 2;
        long mySumSquare = (n * (n + 1L) * (2 * n + 1L)) / 6;

        long arrSum = 0, arrSumSquare = 0;

        // Calculate the sum and sum of squares of the elements in the array
        for (int val : arr)
        {
            arrSum += val;
            arrSumSquare += (long)val * val;
        }

        // Calculate the differences
        long diffSum = arrSum - mySum;                   // (x - y) = diffSum
        long diffSumSquare = arrSumSquare - mySumSquare; // x^2 - y^2 = diffSumSquare  --> (x - y)(x + y) = diffSumSquare
        long sumXY = diffSumSquare / diffSum;            // (x + y)

        // Calculate the missing and repeating numbers
        long x = (diffSum + sumXY) / 2;
        long y = x - diffSum;

        return {(int)x, (int)y};

        // steps:
        //-iterate over arr and mark the elem at index as negative; if elem already neg then its the repeating element
        //-iterate over array again(as of now all are marked) and if any elem is +ve that index is the missing num

        // int rep,mis;
        // for(int i=0;i<n;i++){
        //   if(arr[abs(arr[i])-1]<0)rep=abs(arr[i]);
        //   else arr[abs(arr[i])-1]=(arr[abs(arr[i])-1])*(-1);
        // }
        // for(int i=0;i<n;i++){
        //   if(arr[i]>0){
        //     mis=i+1;
        //     break;
        //   }
        // }
        // return {rep,mis};
    }
};