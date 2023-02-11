/*
An integer matrix of size R*C is given as input.
The program must print the row having the most number of odd numbers in it.
If more than one rows have the most number of odd numbers, print the first occurring row.

Boundary Condition(s): 2 <= R, C <= 100

Input Format:  The first line contains the value of R and C separated by space(s).
               The next R lines contain C elements each separated by space(s).
Output Format: The first line contains C integers separated by a space.

Example Input/Output 1:

Input:  3 4
        15 76 34 99
        77 70 9 73
        84 73 72 78
        
Output: 77 70 9 73

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c], mx=0, mxc;
    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }
    
    for(int i=0; i<r; i++)
    {
        int c1=0;
        for(int j=0; j<c; j++)    
        {
            if(mat[i][j]%2!=0)
            {
                c1+=1;
            }
        }
        if(c1>mx)
        {
            mx=c1;
            mxc=i;
        }
    }
    
    for(int j=0; j<c; j++)
    {
        printf("%d ", mat[mxc][j]);
    }
}
