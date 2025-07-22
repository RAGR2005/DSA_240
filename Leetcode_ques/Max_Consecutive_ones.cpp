#include<bits/stdc++.h>
using namespace std;

/*
485. Max Consecutive Ones
Easy
Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2

Time Complexity: O(N) since the solution involves only a single pass
Space Complexity: O(1) because no extra space is used.


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maximum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }else{
                count=0;
            }
            maximum=max(maximum,count);
        }
        return maximum;
    }
};
*/