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

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y, s=0, s1=0, s2=0, s3=0;
    scanf("%d\n %d", &x, &y);
    
    while(x>0)
    {
        s1=(s1*10)+(x%10);
        x/=10;
    }
    

    while(y>0)
    {
        s2=(s2*10)+(y%10);
        y/=10;
    }
    

    s3=s1+s2;
    
    while(s3>0)
    {
        s=(s*10)+(s3%10);
        s3/=10;
    }
    

    printf("%d", s);
}
