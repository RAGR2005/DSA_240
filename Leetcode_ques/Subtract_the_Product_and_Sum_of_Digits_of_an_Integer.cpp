#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + ld;
        n = n / 10;
    }
    return sum;
}

int mul(int n)
{
    int product = 1;
    while (n > 0)
    {
        int ld = n % 10;
        product = product * ld;
        n = n / 10;
    }
    return product;
}
int subtractProductAndSum(int n)
{

    return mul(n) - sum(n);
}

int main()
{
    int n = 234;
    int res = subtractProductAndSum(n);
    cout << res;
}
