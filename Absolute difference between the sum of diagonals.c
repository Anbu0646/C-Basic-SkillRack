/*
You are given a square matrix of size N×N. Calculate the absolute difference of the sums across the two main diagonals. 

Boundary Condition(s): 2 <= N <= 20

Input Format:  The first line will contain the value of N.
               The next N lines will contain the N values separated by one or more spaces. 
Output Format: The absolute difference of the sums across the two main diagonals.

Example Input/Output 1: 

Input:  2 
        10 9
        4  22 
Output: 19

Explanation: The sum along the first main diagonal is 10+22 = 32. 
             The sum along the second main diagonal is 4+9=13. 
             The absolute difference is 32-13= 19.

Example Input/Output 2:
Input:  2 
        -10 6 
         4 -22 
Output: 22

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n], s1=0, s2=0;
    
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
            if(i==j)
            {
                s1+=mat[i][j];
            }
            if(i==n - j - 1)
            {
                s2+=mat[i][j];
            }
        }
    }
    
    printf("%d", (s1<0 && s2>0)?abs(s1+s2):abs(s1-s2));
}
