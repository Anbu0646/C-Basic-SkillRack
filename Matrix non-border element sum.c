/*
An integer matrix of size RxC is passed as the input to the program. The program must print the sum of elements which are not present in the border of the matrix. 

Boundary Condition(s): 2 <= R,C <= 50 

Input Format:  The first line contains the value of R and C separated by space(s). 
               The next R lines contain C integers each separated by space. 
Output Format: The first line contains the sum of elements which are not present along the border. 

Example Input/Output 1: 

Input:  4 4 
        18 5 5 21 
        23 24 1 25
        8 5 15 17 
        23 4 29 2
Output: 45 

Explanation: The elements which are not present along the border are 24 1 5 15. Hence the output is 24+1+5+15 = 45. 

Example Input/Output 2: 

Input:  5 6 
        93 60 84 26 22 95 
        99 96 86 90 34 0 
        0 83 63 10 74 75 
        36 35 98 4 22 18 
        20 8 27 94 64 30 
Output: 695

Soution:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, sum=0;
    scanf("%d %d", &a, &b);
    char ar[a][b];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            scanf("%d ", &ar[i][j]);
            (i!=0 && i!=(a-1) && j!=0 && j!=(b-1)) ? (sum+=ar[i][j]) : 0;
        }
    }
    printf("%d", sum);
}
