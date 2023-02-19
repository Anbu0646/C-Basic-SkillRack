/*
You are given a square matrix of size N×N. Calculate the sum of the integers present in the two main diagonals.

Input Format:  The first line will contain the value of N. 
               The next N lines will contain the N values separated by one or more spaces. 
Output Format: The sum of the integers present in the two main diagonals. 

Boundary Conditions: 2 <= N <= 20

Example Input/Output 1: 

Input:  2 
        10 9 4 22 
Output: 45 

Explanation: The sum is = 10+22+9+4 = 45 

Example Input/Output 2: 

Input:  3 
        5 10 11
        79 6 12 
        9 21 45
Output: 76

Explanation: The sum is = 5+6+45+11+9 = 76. As 6 is common for both the diagonals it must be counted only once when finding the sum.

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n], s=0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j || i==n - j - 1)
            {
                s+=mat[i][j];
            }
        }
    }
    
    printf("%d", s);
}
