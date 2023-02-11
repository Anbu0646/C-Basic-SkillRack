/*
Given a square matrix of size N as the input, print the lower triangular matrix form of the matrix as shown in the Example Input/ Output section. 

Boundary Conditions: 1 <= N <= 50 

Input Format:  The first line contains the value of N.
               The next N lines contain the values of the matrix. 
Output Format: The first N lines represent the lower triangular matrix format of the matrix. 

Example Input/ Output 1: 

Input:  3
        1 2 3 
        4 5 6 
        7 8 9 

Output: 1
        4 5
        7 8 9 

Example Input/ Output 2:

Input:  4 
        1 2 3 4
        5 6 7 8
        9 1 2 3
        4 5 6 7 

Output: 1 
        5 6 
        9 1 2
        4 5 6 7

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }
    
    for(int i=0; i<n; i++, printf("\n"))
    {
        for(int j=0; j<n; j++)
        {
            if(i>=j)
            {
                printf("%d ", mat[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
    }
}
