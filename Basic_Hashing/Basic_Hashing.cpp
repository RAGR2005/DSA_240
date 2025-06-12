#include<bits/stdc++.h>
using namespace std;


// int arr[1e7] can go up to 10^7 f declared globally

/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Pre-Compute

    int hash[n+1]={0}; // max size of array in integer in int main can go up to 10^6
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetch
        cout<<hash[number]<<endl;
    }

    return 0;
}
*/

//character hashing

/*
// For lowercase or uppercase

int main(){

    string s;
    cin>>s;


    //Pre-Compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;  // for uppercase s[i]-'A'
    }


    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a'];  // for uppercase c-'A'
    }
    return 0;
}
*/

/*

//For both uppercase and lowercase-

int main() {

    string s;
    cin >> s;

    //precompute:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c] << endl;
    }
    return 0;
}
*/


// Using map

/*

Main use of Map is to reduce the size of hash array as like if we use array and say example is like {1,2,1,3,12} then we have to take hash array of 13 size but with map the size is flexible according to the input;

Until now, we have learned the method of number hashing but using this method we cannot hash large numbers like 109 or higher. We can solve this problem using the STL map and unordered_map in C++ or the HashMap in Java collection.

The total time complexity will be O(N * time taken by map data structure).

Storing(i.e. insertion) and fetching(i.e. retrieval) in a C++ map, both take always O(logN) time complexity, where N = the size of the map. 

But the unordered_map in C++ and HashMap in Java, both take O(1) time complexity to perform storing(i.e. insertion) and fetching(i.e. retrieval). Now, it is valid for the best case and the average case. 

But in the worst case, this time complexity will be O(N) for unordered_map. Now, the worst case occurs very very rarely. It almost never happens and most of the time, we will be using unordered_map. 

Note: Our first priority will be always to use unordered_map and then map. If unordered_map gives a time limit exceeded error(TLE), we will then use the map.

The time complexity in the worst case is O(N) because of the internal collision.

In order to understand collision properly, we need to understand the concept of how the hashing work with an optimized space.
*/

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Pre compute
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    // iterate over the map:
     for(auto it : mpp){
            cout << it.first << "->" << it.second << endl;
        }
    
    
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number];
    }
    return 0;
}
    
