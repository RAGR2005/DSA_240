
/*
Intuition
If an array is a rotation of a non-decreasing sorted array, then:

It will have at most one point where nums[i] < nums[i-1], due to the rotation "cut".

If it's fully sorted (no rotation), this condition never occurs.

If rotated, this condition will occur only once, right at the rotation point.

We also check if nums[n-1] > nums[0] because in a valid rotation, the last element should not be larger than the first (as the smaller elements come after the larger ones due to rotation).

Approach
Loop through the array and count the number of times the sequence decreases (nums[i] < nums[i-1]).

Additionally, check if the last element is greater than the first (nums[n-1] > nums[0]) to handle the rotation boundary.

If the total number of such decreases is more than one, the array is not a valid rotation of a sorted array.

Complexity
Time complexity: O(n)
We traverse the array once to count the order violations.
Space complexity: O(1)
We only use a constant amount of extra space (count, n).

class Solution {
public:
    bool check(vector<int>& arr) {
        int count=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<arr[i-1]){
                count++;
            }
        }
        if(arr[arr.size()-1]>arr[0]){
            count++;
        }
        if(count<=1){
            return true;
        }else{
            return false;
        }
    }
};

*/