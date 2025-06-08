#include<bits/stdc++.h>
using namespace std;

void Print_name(int n,int i){
    if(i>n){
        return;
    }
    cout<<"Raghav"<<endl;
   Print_name(n,i+1);

}

int main(){
    int n=3;
    Print_name(n,1);
    return 0;
}
