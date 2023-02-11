/*
An integer matrix M of size R*C is given as input. A string S is also passed as the input. 
The program must replace the occurrences of 0 (zero) in the matrix M with the characters in string S in their of order of occurrence and print the resulting matrix as the output. 

Boundary Condition(s): 2 <= R, C <= 100 

Input Format:  The first line contains the value of R and C separated by space(s). 
The next R lines contain the C integer values each representing the matrix M. 
The next line contains the string S. 

Output Format: The first line contains C integers separated by a space. 

Example Input/Output 1: 

Input:  4 5
        27 3  0  3  9
        11 7  10 13 29 
        5  31 0  12 17 
        27 16 20 0  8 
        machine 

Output: 27 3 m 3 9 
11 7 10 13 29
5 31 a 12 17
27 16 20 c 8

Example Input/Output 2: 

Input: 6 5 
       0  1  19 24 16 35
       27 33 3  6  26 8
       10 12 5  19 0  22
       10 24 35 8  18 0
       13 3  21 12 25 0
       magnificient 

Output: m  1  19 24 16 35 
        27 33 3  6  26 8
        10 12 5  19 a  22
        10 24 35 8  18 g 
        13 3  21 12 25 n

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c], d=0;
    char s[10001];
    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }
    
    scanf("%s", s);
    
    for(int i=0; i<r; i++, printf("\n"))
    {
        for(int j=0; j<c; j++)
        {
            if(mat[i][j]==0)
            {
                printf("%c ", s[d++]);
            }
            else
            {
                printf("%d ", mat[i][j]);
            }
        }
    }
}
