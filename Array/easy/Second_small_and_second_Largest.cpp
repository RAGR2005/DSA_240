#include <bits/stdc++.h>
using namespace std;

/*
Brute_Force_Approach--

Time Complexity: O(NlogN), For sorting the array

Space Complexity: O(1)


void getElements(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    sort(arr,arr+n);
    int small=arr[1];
    int large=arr[n-2];
    cout<<"Second smallest is "<<small<<endl;
    cout<<"Second largest is "<<large<<endl;
}

int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}
*/

/*
Better approach--
Time Complexity: O(N)

Space Complexity: O(1)


void getElements(int arr[], int n)
{
    int small = INT_MAX, sec_small = INT_MAX;
    int large = INT_MIN, sec_large = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < sec_small && arr[i] != small)
        {
            sec_small = arr[i];
        }
        if (arr[i] > sec_large && arr[i] != large)
        {
            sec_large = arr[i];
        }
    }

    cout << "The largrst: " << large << " and the second largest: " << sec_large << endl;
    cout << "The smallest: " << small << " and the second smallest: " << sec_small << endl;
}
int main()
{

    int arr[5] = {34, 5, 45, 50, 1};
    getElements(arr, 5);
    return 0;
}
*/

/*
Optimal Approach--
Time Complexity: O(N), Single-pass solution

Space Complexity: O(1)

*/
int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}



