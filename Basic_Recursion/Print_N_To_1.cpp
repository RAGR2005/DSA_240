/*
Time Complexity: O(N) { Since the function is being called n times, and for each function, we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N) }

Space Complexity: O(N) { In the worst case, the recursion stack space would be full with all the function calls waiting to get completed and that would make it an O(N) recursion stack space }.*/

// #include<bits/stdc++.h>
// using namespace std;

// void Print_N_1(int count){
//     if(count==0){
//         return;
//     }
//     cout<<count<<endl;
//     Print_N_1(count-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     Print_N_1(n);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   
   // Function call to print (i+1) integers.
   func(i+1,n);
   cout<<i<<endl;

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n = 4;
  func(1,n);
  return 0;

}