/*

Time Complexity: O(n), single-pass for reversing array.

Space Complexity: O(n), for the extra array used.

*/

/*
#include<bits/stdc++.h>
using namespace std;


void Print__Array(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int Reverse(int n,int arr[]){
    int rev[n];
    for(int i=n-1;i>=0;i--){
         rev[n-i-1]=arr[i];
    }
    Print__Array(n,rev);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    // int rev[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Reverse(n,arr);
    return 0;
}
*/

/*

Time Complexity: O(n)

Space Complexity: O(1)


#include<bits/stdc++.h>
using namespace std;

void Print__Array(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void Reverse(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    Reverse(arr, l+1, r-1);
}
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    Reverse(arr,0,n-1);
    Print__Array(n,arr);

}

*/

/*
Time Complexity: O(n), single-pass involved.

Space Complexity: O(1) 

void reverseArray(int arr[], int n) {
   int p1 = 0, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
   printArray(arr, n);
}
   
*/

