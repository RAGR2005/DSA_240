#include<bits/stdc++.h>
using namespace std;

/*
Time Complexity: O(n)+O(n), for calculating and printing the Fibonacci series.

Space Complexity: O(n), for storing Fibonacci series.
*/

int main() {
  int n = 5;
  if (n == 0) {
    cout << 0;
  } else if (n == 1) {
    cout << 0 << " " << 1 << "\n";
  } else {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
      fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
    for (int i = 0; i <= n; i++) {
      cout << fib[i] << " ";
    }
  }
}


/*

Solution 2: Space optimized

Intuition: For calculating the ith term we only need the last and second last term i.e (i-1)th and (i-2)th term, so we don't need to maintain the whole array.

Approach:

Take two variables last and secondLast for storing (i-1)th and (i-2)th term.
Now iterate from 2 to n and calculate the ith term. ith term is last + secondLast term.
Then update secondLast term to the last term and the last term to ith term as we iterate.

Time Complexity: O(N).As we are iterating over just one for a loop.

Space Complexity: O(1).

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n = 5;
	if (n == 0) {
	    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << 0;
	}
	else {
		int secondLast = 0;//for (i-2)th term
		int last = 1;//for (i-1)th term
		cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << secondLast << " " << last << " ";
		int cur; //for ith term
		for (int i = 2; i <= n; i++) {
			cur = last + secondLast;
			secondLast = last;
			last = cur;
			cout << cur << " ";
		}
	}
}
*/

/*
Recursive--

Time Complexity: O(2^N) { This problem involves two function calls for each iteration which further expands to 4 function calls and so on which makes worst-case time complexity to be exponential in nature }.

Space Complexity: O(N) { At maximum there could be N function calls waiting in the recursion stack since we need to calculate the Nth Fibonacci number for which we also need to calculate (N-1) Fibonacci numbers before it }.

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N){
   
   // Base Condition.
   if(N <= 1)
   {
       return N;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   int last = fibonacci(N-1);
   int slast = fibonacci(N-2);
   
   return last + slast;

}

int main(){
  
  // Here, let’s take the value of N to be 4.
  int N = 4;
  cout<<fibonacci(N)<<endl;
  return 0;

}

*/