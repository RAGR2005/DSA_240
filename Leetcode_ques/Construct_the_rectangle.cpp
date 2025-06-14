#include <bits/stdc++.h>
using namespace std;
/*

492. Construct the Rectangle

A web developer needs to know how to design a web page's size. So, given a specific rectangular web page’s area, your job by now is to design a rectangular web page, whose length L and width W satisfy the following requirements:

The area of the rectangular web page you designed must equal to the given target area.
The width W should not be larger than the length L, which means L >= W.
The difference between length L and width W should be as small as possible.
Return an array [L, W] where L and W are the length and width of the web page you designed in sequence.

Example 1:

Input: area = 4
Output: [2,2]
Explanation: The target area is 4, and all the possible ways to construct it are [1,4], [2,2], [4,1]. 
But according to requirement 2, [1,4] is illegal; according to requirement 3,  [4,1] is not optimal compared to [2,2]. So the length L is 2, and the width W is 2.
Example 2:

Input: area = 37
Output: [37,1]
Example 3:

Input: area = 122122
Output: [427,286]

*/


/*

Intuition
To find the rectangle dimensions (length and width) with the given area and minimal difference, the length should be as close as possible to the square root of the area. If the area is a perfect square, both sides are equal. For prime areas, the rectangle is simply area x 1. For others, we try to find factors close to the square root.

Approach
Compute the integer square root of the area.

If the area is a perfect square, return {root, root}.

Check if the area is prime. If yes, return {area, 1}.

Otherwise, starting from root + 1, iterate upwards to find a factor of the area.

Once found, return {root, area/root}.

NOTE :-

The isPrime helper function efficiently checks primality by checking divisibility by 2, 3, and numbers of form 6k ± 1 up to the square root of n.

Complexity
Time Complexity:

isPrime runs in O(√n).
The factor search loop runs up to O(n), but practically much less because factors are found close to √n.
Overall complexity is roughly O(√n).

Space Complexity:

O(1) additional space, as only a few variables are used.

*/
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

vector<int> constructRectangle(int area)
{
    int root = sqrt(area);
    if (root * root == area)
        return {root, root};

    if (isPrime(area))
        return {area, 1};
    root += 1;

    while (root < area)
    {
        int ans = area / root;
        if (root * ans == area)
        {
            return {root, ans};
        }
        else
        {
            root++;
        }
    }
    return {};
}
int main()
{
    int area = 38;
    vector<int> result = constructRectangle(area);

    cout << "Rectangle dimensions for area " << area << " are: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
