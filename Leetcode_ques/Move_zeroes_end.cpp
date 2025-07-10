/*

283. Move Zeroes
Solved
Easy
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        brute-force--
        // vector<int> temp;
        // int n=arr.size();
        // for(int i=0;i<n;i++){
        //     if(arr[i]!=0){
        //         temp.push_back(arr[i]);
        //     }
        // }
        // int nz=temp.size();
        // for(int i=0;i<nz;i++){
        //     arr[i]=temp[i];
        // }

        // for(int i=nz;i<n;i++){
        //     arr[i]=0;
        // }

        //optimal--
        int n=arr.size();
        int j=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                j=i;
                break;
            } 
        }
         if(j==-1){
                return;
            }
        for(int i=j+1;i<n;i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
};

*/