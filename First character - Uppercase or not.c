/*
The program must accept a space separated string S as the input. If every words in S starts with uppercase character then the program must print YES as the output.
Else the program must print NO as the output.

Boundary Condition(s):  1 <= Length of S <= 100 

Example Input/Output 1: 

Input:  Apple Mango
Output: YES 

Example Input/Output 2: 

Input:  program 
Output: NO

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[101][101];
    int f=0, len=0;
   
    while(scanf("%s ", s[len]) > 0)
    {
        len++;
    }
   
    for(int i=0;i<len; i++)
    {
        if(!isupper(s[i][0]))
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
