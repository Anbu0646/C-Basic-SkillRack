/*
An integer matrix of size N*N is given as input. The program must print the sum of first and last row elements. 

Boundary Condition(s): 2 <= N <= 100 

Input Format:  The first line contains the value of N.
The next N lines contain N elements each separated by space(s). 

Output Format: The first line contains the sum of first and last row elements. 

Example Input/Output 1: 

Input:  4 
        10 20 30 40
        50 60 70 80
        25 35 45 55 
        5  10 15 20 

Output: 150

Example Input/Output 2:

Input:  5
        2  64 5  94 76
        47 87 23 83 72
        93 30 40 48 6 
        9  1  20 77 49 
        15 66 20 53 89

Output: 484

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n], s=0, s1=0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }
    
    for(int j=0; j<n; j++)
    {
        s+=mat[0][j];
    }
    
    for(int i=0; i<n; i++)
    {
        s1+=mat[n - 1][i];
    }
    
    printf("%d", s+s1);
}
