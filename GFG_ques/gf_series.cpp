#include<bits/stdc++.h>
using namespace std;

/*

Siddhant made a special series and named it as G.F Series. The series follows this trend  Tn=(Tn-2)2-(Tn-1)  in which the first and the second term are 0 and 1 respectively. Help Siddhant to find the first n terms of the series.

Note: Print a white space (" ") after every integer and a newline character after every testcase.

Examples

Input: n = 3
Output: 0 1 -1
Explanation: First-term is given as 0 and the second term is 1. So the T3 = (T3-2)2 - (T3-1) = T12 - T2 = 02 - 1 = -1

*/
/* optimized approach
 void gfSeries(int n) {
        if (n <= 0) return;

        long long a = 0; // T0
        long long b = 1; // T1

        for (int i = 0; i < n; i++) {
            if (i == 0)
                cout << a << " ";
            else if (i == 1)
                cout << b << " ";
            else {
                long long c = a * a - b; // Tn = Tn-2^2 - Tn-1
                cout << c << " ";
                a = b;
                b = c;
            }
        }
        cout << "\n";
    }

*/


int main(){
    int n;
    cin>>n;
    vector<long long> arr;
    for(int i=0;i<n;i++){
        if(i==0){
            arr.push_back(0);
        }else if(i==1){
            arr.push_back(1);
        }else{
            long long res=(long long)(round(pow(arr[i-2],2))) - arr[i-1];
            arr.push_back(res);
        }
    }

    for(auto it:arr){
        cout<<it<<" ";
    }

    // gfSeries(n);
    return 0;
}

/*
Naive recursion solution c++

Method	Time Complexity	Space Complexity	Notes
Naive Recursion	Exponential	O(n) (stack)	Slow, repeated calculations
class Solution {
  public:
  long long gfTerm(long long n){
      if(n==0) return 0;
      if(n==1) return 1;
      return gfTerm(n-2)*gfTerm(n-2) - gfTerm(n-1);
  }
    void gfSeries(int n) {
        // Write Your Code here
        for(int i=0;i<n;i++){
            cout<<gfTerm(i)<<" ";
        }
        cout<<endl;
    }
};

Optmized Approach--

Method	Time Complexity	Space Complexity	Notes
Naive Recursion	Exponential	O(n) (stack)	Slow, repeated calculations
Iterative	O(n)	O(1)	Fastest and most efficient ✅
#include <iostream>
using namespace std;

class Solution {
public:
    void gfSeries(int n) {
        if (n <= 0) return;

        long long a = 0; // T0
        long long b = 1; // T1

        for (int i = 0; i < n; i++) {
            if (i == 0)
                cout << a << " ";
            else if (i == 1)
                cout << b << " ";
            else {
                long long c = a * a - b; // Tn = Tn-2^2 - Tn-1
                cout << c << " ";
                a = b; // as now for next term (n-2)th term will be b and (n-1)th term will be c so we        have to change the a and b values according to that
                b = c;
            }
        }
        cout << "\n";
    }
};
*/