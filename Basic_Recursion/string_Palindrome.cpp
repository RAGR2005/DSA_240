/*
Time Complexity:  O(N)

Space Complexity: O(1)

bool isPalindrome(string s) {

        int left = 0, right = s.length()-1;
        while(left<right)
        {
            if(!isalnum(s[left]))                   as space is not aplhanumeric
                left++;
            else if(!isalnum(s[right]))             as space is not aplhanumeric
                right--;
            else if(tolower(s[left])!=tolower(s[right]))
                return false;
            else {
                left++;
                right--;
            }
        }
        return true;

}
int main() {

  string str = "ABCDCBA";
  bool ans = isPalindrome(str);

  if (ans == true) {
    cout << "Palindrome";
  } else {
    cout << "Not Palindrome";
  }
  return 0;
}
*/

/*
Recurive Approach--

Time Complexity: O(N) { Precisely, O(N/2) as we compare the elements N/2 times and swap them}.

Space Complexity: O(1) { The elements of the given array are swapped in place so no extra space is required}.

#include <iostream>
using namespace std;

bool palindrome(int i, string& s){

    // Base Condition
    // If i exceeds half of the string means all the elements
    // are compared, we return true.
    if(i>=s.length()/2) return true;

    // If the start is not equal to the end, not the palindrome.
    if(s[i]!=s[s.length()-i-1]) return false;

    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i+1,s);
}

int main() {

    // Example string.
    string s = "madam";
    cout<<palindrome(0,s);
    cout<<endl;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

bool Palin(int i, int n, string s)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (tolower(s[i]) != tolower(s[n - i - 1]))
    {
        return false;
    }
    Palin(i + 1, n, s);
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
    int n = s.length();
    if (Palin(0, n, s))
    {
        cout << "Is Palindrome";
    }
    else
    {
        cout << "Not";
    }
    return 0;
}