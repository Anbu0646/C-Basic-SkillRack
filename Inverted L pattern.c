/*

The program must accept an integer as N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s): 1 <= N <= 1000 

Input Format:  The first line contains the value of N. 
Output Format: The list of lines contain the desired pattern as shown in the Example Input/Output sections. 

Example Input/Output 1: 

Input:  10 
Output: 1 3 5 7 9 
        2 
        4 
        6 
        8 
        
        
Example Input/Output 2: 

Input:  7 
Output: 1 3 5 7 
        2 
        4 
        6
        
SOLUTION:
*/
// ==> Code by @JustNothingVishal
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<n; i+=2, printf("\n%d", i))
        if(i==1)
        {
            for(int j=1; j<=n; printf("%d ", j), j+=2)
        i++;
        }
    return 0;
}
