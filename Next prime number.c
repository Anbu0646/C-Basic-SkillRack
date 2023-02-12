/*
A number N is passed as the input. The program must print the next immediate prime number.

Input Format:  The first line will contain N. 
Output Format: The first line will contain the integer value of next immediate prime number.

Boundary Conditions: 1 <= N <= 999999

Example Input/Output 1: 

Input:  11
Output: 13

Example Input/Output 2:

Input:  2 
Output: 3

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int p(long int n)
{
    for(long int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long int n;
    scanf("%ld", &n);
    for(long int i=n + 1;;)
    {
        if(p(i)==1)
        {
            printf("%ld", i);
            break;
        }
    i++;
    }
}
