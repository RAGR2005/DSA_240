#include<bits/stdc++.h>
using namespace std;
/*

Complexity
Time complexity:
O(n log n) — Sorting the array takes O(n log n) time. The subsequent traversal is O(n), so the overall complexity is O(n log n).

Space complexity:
O(1) — The sorting is done in-place and only a constant amount of extra space is used for variables.

*/
int thirdM(vector<int> nums){
    sort(nums.begin(),nums.end());
    int maxCount=1;
    for(int i=nums.size()-2;i>=0;i--){
        if(nums[i]!=nums[i+1]){
            maxCount++;
            if(maxCount==3){
                return nums[i];
            }
        }
    }
    return nums[nums.size()-1];
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=thirdM(arr);
    cout<<res;
    return 0;
}