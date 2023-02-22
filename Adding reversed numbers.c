/*
A pair of numbers (X and Y) will be passed as input.
The program must reverse the numbers and find the sum S.
Then the sum S must be reversed and printed as output. 
- If any leading zeroes are obtained while reversing any of the numerical values they should be discarded. 

Boundary Conditions:  0 < X < 10000 
                      0 < Y < 10000 

Input Format:  First line will contain the value of X Second line will contain the value of Y
Output Format: The first line will contain the sum S Sample

Input/Output: 

Example 1: 

Input:  24 
        1 
Output: 34 

Explanation: 24 when reversed is 42. So 42+1 = 43. When 43 is reversed it is 34 and hence 34 is the output. 

Example 2: 

Input:  305 
        794 
Output: 1 

Explanation: 305 and 794 when reversed are 503 and 497. 503+497 = 1000. 1000 when reversed is 1 which is printed as output.

SOLUTION:
*/

#include <stdio.h>

int rev(int n)
{
    int s = 0;
    while(n > 0)
    {
        s = (s * 10) + (n % 10);
        n /= 10;
    }
    return s;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", rev(rev(x) + rev(y)));
    return 0;
}
