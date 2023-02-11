/*
An integer matrix of size N*N is given as input. The program must print the column-wise mirror image of the matrix as shown in the Example Input/Output section.

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains the value N. 
               The next N lines contain N elements each separated by space(s). 
Output Format: The first N lines contain the mirror image of the given matrix.

Example Input/Output 1:

Input:  4
        1 2 3 4
        5 6 7 8
        9 0 1 2
        3 4 5 6 

Output: 4 3 2 1
        8 7 6 5
        2 1 0 9
        6 5 4 3 

Example Input/Output 2: 

Input:  5 
        63 32 47 84 67
        69 58 37 49 56
        34 20 39 53 40 
        81 49 90 13 5 
        97 71 87 22 25

Output: 67 84 47 32 63
        56 49 37 58 69
        40 53 39 20 34
        5  13 90 49 81 
        25 22 87 71 97

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
        for(int j=n - 1; j>=0; j--)
        {
            printf("%d ", mat[i][j]);
        }
    }
}
