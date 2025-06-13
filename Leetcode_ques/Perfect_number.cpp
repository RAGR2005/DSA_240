#include <bits/stdc++.h>
using namespace std;



/*

507. Perfect Number

A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.

Given an integer n, return true if n is a perfect number, otherwise return false.

Example 1:

Input: num = 28
Output: true
Explanation: 28 = 1 + 2 + 4 + 7 + 14
1, 2, 4, 7, and 14 are all divisors of 28.
Example 2:

Input: num = 7
Output: false

*/


/*
Time complexity: O(√n) + O(nlogn) + O(n) = O(nlogn)
Space complexity: O(2*√n)

*/
bool isPerfect(int n)
{
    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++)         // O(sqrt(n))
    {
        if (n % i == 0)
        {
            // cout << i << " ";
            ls.push_back(i);

            if ((n / i) != i)
            {
                ls.push_back(n / i);
                // cout << (int)(n / i) << " ";
            }
        }
    }
    // cout << endl;
    int sum = 0;
    sort(ls.begin(), ls.end());                  // O(nlogn)
    for (int i = 0; i < ls.size() - 1; i++)      // O(n)
    {
        // cout<<ls[i]<<" ";
        sum = sum + ls[i];
    }
    // cout<<endl;
    // cout<<sum;
    // cout<<endl;

    if (sum == n)
    {
        // cout<<"Perfect Number";
        return true;
    }
    else
    {
        // cout<<"Not perfect number";
        return false;
    }
}
int main()
{
    int n = 28;

    if (isPerfect(n))
    {
        cout << "Perfect Number";
    }
    else
    {
        cout << "Not perfect number";
    }
    return 0;
}
/*

Optimized--


Complexity
Time complexity: O(√n)
Space complexity: O(1)

*/
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;

    int sum = 1; 
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) 
                sum += num / i;
        }
    }

    return sum == num;
    }
};