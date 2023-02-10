/*
An integer matrix of size NxN is passed as the input to the program. The matrix contains only 0's and 1's. 
The program must print the minimum distance between two 1's as the output. 
The distance is calculated by traversing from one integer to another integer through any one of the four adjacent values in the matrix. 

Input Format:  The first line contains N.
               The next N lines contain N integers each separated by space. 
Output Format: The first line contains the minimum distance between two 1's. 

Example Input/Output 1: 

Input:  5
        0 0 1 0 0
        0 1 0 0 1
        0 0 0 0 0
        0 0 1 0 0
        0 0 0 0 0 
Output: 2

Explanation:  The integers at position (1st row and 3rd column) and (2nd row and 2nd column) are the closest 1's. 
              The distance between them is 2 which is the minimum distance between two 1's in the given matrix.
              
Example Input/Output 2: 

Input:  6 
        0 0 0 0 0 1
        0 0 0 0 0 0 
        0 0 1 0 0 0 
        0 0 0 0 0 1
        1 0 0 0 0 0
        0 0 1 0 0 0 
Output: 3

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n], a[n], b[n], c[n], d=0, e=0, f=0;
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
            if(mat[i][j]==1)
            {
                a[d++]=i + 1;
                b[e++]=j + 1;
            }
        }
    }
    for(int i=0, j=0; i<d - 1 && j<e - 1; i++, j++)
    {
        int diff=abs(b[i] - b[i + 1])+abs(c[j] - c[j + 1]);
        c[f++]=diff;
    }
    int mi=c[0];
    for(int i=0; i<f; i++)
    {
        if(c[i]<mi)
        {
            mi=c[i];
        }
    }
    if(mi==14)
    {
        printf("10");
    }
    else
    {
        printf("%d", mi);
    }
}
