/*

66. Plus One

You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].

edge cases-[9,9] or [9,9,9] etc.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] + 1 != 10)
        {
            digits[i] += 1;
            return digits;
        }
        digits[i] = 0;
        if (i == 0)
        {
            digits.insert(digits.begin(), 1);
        }
    }
    return digits;
}

int main()
{
    vector<int> digits;
    int n;
    cin>>n;
    while(n--){
        int value;
        cout<<"Enter value: ";
        cin>>value;
        digits.push_back(value);
    }

    plusOne(digits);
    for(auto ele:digits){
        cout<<ele<<" ";
    }
    return 0;
}