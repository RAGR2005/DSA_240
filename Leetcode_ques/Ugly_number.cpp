#include<bits/stdc++.h>
using namespace std;

/*

Complexity	Value
Time	O(log n)
Space	O(1)


*/
int main(){

    int n;
    cin>>n;
    // int n1;
    // cin>>n1;
   if (n <= 0) return false;
        while(n > 1)
        {
            if (n % 2 == 0) n = n / 2;
            else if (n % 3 == 0) n = n / 3;
            else if (n % 5 == 0) n = n / 5;
            else break;
        }
        if(n == 1) cout<<"ugly";
    return 0;
}

