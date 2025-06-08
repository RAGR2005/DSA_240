/*

Time Complexity: O(N) { Since the function is being called n times, and for each function, we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N) }

Space Complexity: O(N) { In the worst case, the recursion stack space would be full with all the function calls waiting to get completed and that would make it an O(N) recursion stack space }.

*/

#include<bits/stdc++.h>
using namespace std;

int Print_Sum(int n){
    if(n==0){
        return 0;
    }
    return n+Print_Sum(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<Print_Sum(n);
    return 0;
}

//Alternate Approach
#include<bits/stdc++.h>
using namespace std;

void func(int i, int sum){
   
   // Base Condition.
   if(i<1)
   {
       cout<<sum<<endl;
       return;
   }

   // Function call to increment sum by i till i decrements to 1.
   func(i-1,sum+i);

}

int main(){
  
  // Here, let’s take the value of n to be 3.
  int n = 3;
  func(n,0);
  return 0;

}