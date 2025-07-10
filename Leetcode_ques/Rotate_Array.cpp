/*89. Rotate Array

Solved
Medium

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.


Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Time Complexity - O(N) where N is the number of elements in an array
Space Complexity - O(1) since no extra space is required

    void reverse(vector<int> &arr,int l,int r){
        if(l>=r){
            return;
        }
        swap(arr[l],arr[r]);
        reverse(arr,l+1,r-1);
    }
    void rotate(vector<int>& nums, int d) {
        int n=nums.size();
        d=d%n;
        if(d>n){
            return;
        }
        
        reverse(nums,0,n-d-1);
        reverse(nums,n-d,n-1);
        reverse(nums,0,n-1);
    }
};

*/