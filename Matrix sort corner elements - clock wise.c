/*
An integer matrix of size R*C is passed as input. 
The program must sort the elements at the corner position of the matrix in clock-wise direction and print the matrix. 

Boundary Condition(s): 1 <= R, C <= 1000 

Input Format:  The first line contains the value of R and C separated by space(s).
               The next R lines contain C elements each separated by space(s).
Output Format: The first R lines contain C elements each separated by a space with corner elements sorted in clock-wise direction. 

Example Input/Output 1: 

Input:  3 3
        9 2 7
        4 5 6 
        3 8 1 

Output: 1 2 3 
        4 5 6 
        9 8 7 

Example Input/Output 2:

Input:  4 3 
        924 450 994
        58 146 589 
        526 548 407
        471 145 779

Output: 471 450 779
        58 146 589
        526 548 407
        994 145 924

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c], mat1[4], c1=0, d=0;
    
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
            if((i==0 && j==0) || (i==0 && j==c - 1) || (i==r - 1 && j==0) || (i==r - 1 && j==c - 1))
            {
                mat1[c1++]=mat[i][j];
            }
        }
    }
    
    for(int i=0; i<c1; i++)
    {
        for(int j=i + 1; j<c1; j++)
        {
            if(mat1[i]>mat1[j])
            {
                int t=mat1[i];
                mat1[i]=mat1[j];
                mat1[j]=t;
            }
        }
    }
    
    for(int i=0; i<r; i++, printf("\n"))
    {
        for(int j=0; j<c; j++)
        {
            if((i==0 && j==0)||(i==0 &&j==c - 1))
            {
                printf("%d ", mat1[d++]);
            }
            else if(i==r - 1 && j==c - 1)
            {
                printf("%d ", mat1[2]);
            }
            else if(i==r - 1 && j==0)
            {
                printf("%d ", mat1[3]);
            }
            else
            {
                printf("%d ", mat[i][j]);
            }
        }
    }
}
