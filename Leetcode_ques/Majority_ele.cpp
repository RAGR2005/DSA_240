/*
169. Majority Element
Easy
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 
Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
Time Complexity: O(N*logN) + O(N), where N = size of the given array.
Reason: We are using a map data structure. Insertion in the map takes logN time. And we are doing it for N elements. So, it results in the first term O(N*logN). The second O(N) is for checking which element occurs more than floor(N/2) times. If we use unordered_map instead, the first term will be O(N) for the best and average case and for the worst case, it will be O(N2).

Space Complexity: O(N) as we are using a map data structure.

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[arr[i]]++;
        }

        for (auto it : mpp) {
            if (it.second > n / 2) {
                return it.first;
            }
        }
        return -1;
    }
};
*/