#include <bits/stdc++.h>
#include<cmath>
using namespace std;
/*
// Function to check if a
// number is an Armstrong number
bool isArmstrong(int num) {
    // Calculate the number of
    // digits in the given number
    int k = to_string(num).length();
    // Initialize the sum of digits
    // raised to the power of k to 0
    int sum = 0;
    // Copy the value of the input
    // number to a temporary variable n
    int n = num;
    // Iterate through each
    // digit of the number
    while(n > 0){
        // Extract the last
        // digit of the number
        int ld = n % 10;
        // Add the digit raised to
        // the power of k to the sum
        sum += pow(ld, k); 
        // Remove the last digit
        // from the number
        n = n / 10;
    }
    // Check if the sum of digits raised to
    // the power of k equals the original number
    return sum == num ? true : false;
}

int main() {
    int number = 153;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
*/
int countdigits(int n){
    
    int cn=0;
    while(n>0){
        cn++;
        n=n/10;
    }
    return cn;
}
int main(){
    int n;
    cin>>n;
    int temp=n; 
    int AN=0;
    int k=countdigits(n);
    while(temp>0){
        int ld=temp%10;
        cout<<"ld: "<<ld<<endl;
        AN = AN + (int)(round(pow(ld, k)));

        // The pow function returns a double, but AN is an int. When you write:
        //AN = AN + pow(ld, 3); The pow result might be something like 124.999999 (due to floating-point imprecision), and casting it directly to int truncates the decimal, making it 124.Ex-153 for 5 it will be 124.9999999 thats why we use int and round here

        cout<<"AN: "<<AN<<endl;
        temp=temp/10;
        cout<<"temp: "<<temp<<endl;
    }
    cout<<AN;
    if(n==AN){
        cout<<"AN";
    }else{
        cout<<"Not";
    }
    
    return 0;
}
                    