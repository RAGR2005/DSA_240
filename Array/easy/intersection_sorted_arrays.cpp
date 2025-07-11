#include<bits/stdc++.h>
using namespace std;

/*
Time:O(n*m)
space:O(n) or O(m) as you can take visited array size n but then you have to traverse through array b and add b[j] and vis[i]=1 

vector < int > Findinter(int a[], int b[], int n, int m) {
//   int i = 0, j = 0;
  int vis[m]={0};
  vector<int> ans;

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i]==b[j] && vis[j]==0){
            ans.push_back(a[i]);
            vis[j]=1;
            break;
        }
        if(b[j]>a[i]) break;
    }
  }
  return ans;
}
int main()

{
  int n = 8, m = 7;
  int arr1[] = {1,2,2,3,3,4,5,6};
  int arr2[] = {2,3,3,5,6,6,7}; 
  vector < int > Union = Findinter(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}
*/

/*
Optimized
Time : Worst case O(n+m)
Space:O(1), {but for worst case O(n+m)}
*/

vector < int > FindIntersection(int a[], int b[], int n, int m) {
  int i = 0, j = 0;
  vector<int> ans;
  while(i<n && j<m){
    if(a[i]<b[j]){
        i++;
    }else if(b[j]<a[i]){
        j++;
    }else{
        ans.push_back(a[i]);
        i++;
        j++;
    }
  }
  return ans;
}
int main()

{
  int n = 8, m = 7;
  int arr1[] = {1,2,2,3,3,4,5,6};
  int arr2[] = {2,3,3,5,6,6,7}; 
  vector < int > Union = FindIntersection(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}

