/*
The program must accept an RxC matrix as the input. The program must reverse the odd columns in the matrix and print the modified matrix as the output.

Boundary Condition(s): 1 <= R, C <= 100

Input Format:  The first line contains R and C separated by a space.
               The next R lines contain C integers each separated by a space. 
Output Format: The first R lines contain the modified matrix.

Example Input/Output 1: 

Input:  3 4 
        27 22 46 24
        47 32 24 36
        17 13 33 10
        
Output: 17 22 33 24
        47 32 24 36
        27 13 46 10 

Explanation: The first and third columns are reversed. 

Example Input/Output 2: 

Input:  4 5 
        15 39 29 13 48
        41 34 19 49 32 
        39 36 39 24 39
        19 10 17 41 26 
        
Output: 19 39 17 13 26
        39 34 39 49 39 
        41 36 19 24 32
        15 10 29 41 48

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }
    for(int j=0; j<c; j++)
    {
        if(j%2==0)
        {
            for(int i=0, k=r -1; i<k; i++, k--)
            {
                int t=mat[i][j];
                mat[i][j]=mat[k][j];
                mat[k][j]=t;
            }
        }
    }
    for(int i=0; i<r; i++, printf("\n"))
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ", mat[i][j]);
        }
    }
}
