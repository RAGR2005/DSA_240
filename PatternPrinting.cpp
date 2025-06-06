#include <iostream>
#include <cmath>
using namespace std;
/*
*****
*****
*****
*****
*****
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
11111
22222
33333
44444
55555
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
12345
12345
12345
12345
12345
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
54321
54321
54321
54321
54321

int main(){
    for(int i=0;i<5;i++){
        for(int j=5;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25


int main(){
    for(int i=0;i<5;i++){
        for(int j=1;j<=5;j++){
            cout<<pow(j,2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
aaaaa
bbbbb
ccccc
ddddd
eeeee

int main(){
    for(int i=1;i<6;i++){
        char name='a'+i-1;
        for(int j=1;j<6;j++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
abcde
abcde
abcde
abcde
abcde

int main(){
    for(int i=0;i<5;i++){
        for(char j='a';j<='e';j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

int main(){
    // int count=1;
    for(int i=1;i<=5;i++){
        for(int j=(i-1)*5 + 1;j<=(i-1)*5 +5 ;j++){

            cout<<j<<" ";
            // cout<<count<<" ";
            // count++;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
1 8 27 64 125 216
1 8 27 64 125 216
1 8 27 64 125 216
1 8 27 64 125 216
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=6;j++){
            cout<<pow(j,3)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
*
**
***
****
*****

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
1
12
123
1234
12345
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
1
22
333
4444
55555

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
1
21
321
4321
54321

int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
a
bb
ccc
dddd
eeee

int main(){
    for(int i=1;i<=5;i++){
        char name='a'+i-1;
        for(int j=1;j<=i;j++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
*****
****
***
**
*
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-(i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
    *
   **
  ***
 ****
*****

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
    1
   22
  333
 4444
55555

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
    1
   12
  123
 1234
12345

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }

        for(int k=1;k<=i;k++){
            cout<<k<<" ";

        }
        cout<<endl;
    }
    return 0;
}
*/

/*
    a
   ab
  abc
 abcd
abcde
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }

        for(int k='a';k<='a'+i-1;k++){
            cout<<char(k)<<" ";

        }
        cout<<endl;
    }
    return 0;
}
*/

/*
    1
   21
  321
 4321
54321


int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }

        for(int k=i;k>=1;k--){
            cout<<k<<" ";

        }
        cout<<endl;
    }
    return 0;
}
*/

/*
     *
    ***
   *****
  *******
 *********


int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }

        for(int k=1;k<=(2*i)-1;k++){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}
*/

/*
     1
    121
   12321
  1234321
 123454321
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }

        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
            for(int l=i-1;l>=1;l--){
                cout<<l<<" ";
            }

        cout<<endl;
    }
    return 0;
}
*/

/*
  *********
   *******
    *****
     ***
      *

int main(){
    for(int i=5;i>=1;i--){
        for(int j=0;j<=5-i;j++){
            cout<<"  ";
        }

            for(int k=(2*i)-1;k>=1;k--){
            cout<<"*"<<" ";
            }
        cout<<endl;
    }
    return 0;
}
*/

/*
* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *



int main()
{

    int n;
    cout << "Enter number" << endl;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}
*/

/*
*       *
**     **
***   ***
*********
***   ***
**     **
*       *

int main()
{

    int n;
    cout << "Enter number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}
*/

/*
    1
   123
  12345
 1234567
123456789



int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }

        for(int k=1;k<=2*i-1;k++){
            cout<<k<<" ";

        }
        cout<<endl;
    }
    return 0;
}
*/

/*
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA


int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(int k='A';k<='A'+i-1;k++){

            cout<<char(k)<<" ";

        }

        for(int k=i-1;k>=1;k--){
            cout<<char('A'+k-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/



/*
1 2 3 4 5 
1 2 3 4 
1 2 3
1 2
1

void print1(int n)
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j= 1; j<=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print1(n);
}
*/

/*
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*i)+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print1(int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            cout << " ";
        }
        
        for(int k=(2*n)-1;k>=(2*i)+1;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print2(n);
    print1(n);

}
*/



/*
*
**
***
****
*****
****
***
**
*

void print1(int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i+1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}


// efficient approach-
void print3(int n){
for(int i=1;i<=2*n-1;i++){
    int stars=i;
    if(i>n) stars=2*n-i;
    for(int j=1;j<=stars;j++){
        cout<<"*";
    }
    cout<<endl;
        }
}
        
int main()
{
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    print3(n);

}

*/

/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1


void print3(int n){
    int start=1;
    for(int i=0;i<n;i++){
            if(i%2==0){
                start=1;
            }
            else {
                start=0;
            }
            for(int j=0;j<=i;j++){
                cout<<start;
                start=1-start;
            }
               cout<<endl;
        }
     
}
        
int main()
{
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    print3(n);

}
*/
/*
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1

void print3(int n){
    for(int i=1;i<=n;i++){
            //numbers
            for(int j=1;j<=i;j++){
                cout<<j;
            }

            //space
            for(int j=1;j<=(2*n)-(2*i);j++){
                cout<<" ";
            }

            //numbers
            for(int j=i;j>=1;j--){
                cout<<j;
            }
               cout<<endl;
        }
     
}
        
int main()
{
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    print3(n);

}
*/

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

void print3(int n){
    int num=1;
    for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num<<" ";
                num=num+1;
            }
               cout<<endl;
        }
     
}
        
int main()
{
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    print3(n);

}
*/


/*
A
A B
A B C
A B C D
A B C D E

void print3(int n){
    
    for(int i=1;i<=n;i++){
        char num='A';
            for(int j=1;j<=i;j++){
                cout<<num<<" ";
                num=num+1;
            }
               cout<<endl;
        }
     
}
OTHER APPROACH
Void print3(int n){
    
    for(int i=0;i<n;i++){
            for(char j='A';j<='A'+i;j++){
                cout<<j<<" ";
            }
               cout<<endl; 
        }
     
        
int main()
{
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    print3(n);

}

*/

/*
A
B B 
C C C
D D D D 
E E E E E


void print3(int n){
     char num='A';
    for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num<<" ";
            }
            num=num+1;
               cout<<endl;
        }
     
}
        
int main()
{
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    print3(n);

}
*/

/*
      A
    A B A
  A B C B A
A B C D C B A



void print3(int n){
   
    for(int i=0;i<n;i++){
            //SPACE
            for(int j=0;j<n-1-i;j++){
                cout<<" ";
            }
            //Chars
            for(char j='A';j<='A'+i;j++){
                    cout<<j;
            }

            for(char j='A'+i-1;j>='A';j--){
                cout<<j;
            }
            cout<<endl;
        }
     
}
        
int main()
{
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    print3(n);
}

*/


/*
E
DE
CDE
BCDE
ABCDE


void print3(int n){
    for(int i=1;i<=n;i++){
        for(char j='A'+n-i;j<='A'+n-1;j++){
            cout<<j;
        }
        cout<<endl;
    }
     
}
        
int main()
{
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    print3(n);
}
*/


/*
* * * *
*     *
*     *
* * * *




void print3(int n){
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
        cout<<endl;
    }
     
}
        
int main()
{
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    print3(n);
}

*/


/*
6 6 6 6 6 6 6 6 6 6 6 
6 5 5 5 5 5 5 5 5 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 2 1 2 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 5 5 5 5 5 5 5 5 6 
6 6 6 6 6 6 6 6 6 6 6


void print3(int n)
{
     // Outer loop for no. of rows
     for(int i=0;i<2*n-1;i++){
         
         // inner loop for no. of columns.
         for(int j=0;j<2*n-1;j++){
             
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
         }
         
         // As soon as the numbers for each iteration are printed, we move to the
         // next row and give a line break otherwise all numbers
         // would get printed in 1 line.
         cout<<endl;
     }
      
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N = 5;
    
    print3(N);

    return 0;
}
*/