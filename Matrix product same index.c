/*
Two integer matrices of size R*C are given as input. 
The program print the product of the matrices by calculating the product of integers at the same indices. 

Boundary Condition(s): 1 <= R, C <= 100 

Input Format:  The first line contains the value of R and C separated by space(s). 
               The next R lines contain C elements each separated by space(s) for the first matrix.
               The next R lines contain C elements each separated by space(s) for the second matrix. 
Output Format: The first R lines contain the product of the element in two matrices at the same indices.

Example Input/Output 1:

Input:  3 4 
        14 4 3 5
        14 14 10 13
        13 3 11 12 
        12 8 7 13
        10 8 14 3
        15 15 8 2 

Output: 168 32 21 65
        140 112 140 39 
        195 45 88 24 

Example Input/Output 2: 

Input:  3 3 
        5 14 7 
        4 3 13
        9 2 7 
        12 4 8
        13 12 5
        13 10 10

Output: 60 56 56
        52 36 65 
        117 20 70

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c], mat1[r][c], p1, p2;
    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }
    
    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d ", &mat1[i][j]);
        }
    }
    
    for(int i=0; i<r; i++, printf("\n"))
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ", mat[i][j]*mat1[i][j]);
        }
    }
    
}
