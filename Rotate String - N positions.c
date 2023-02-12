/*
A string S of length L is passed as the input. The program must rotate the string S by N position in forward direction and print the result as the output.

Input Format:  The first line will contain the value of S.
               The second line will contain N. 
Output Format: The first line will contain the rotated string value. 

Boundary Conditions: The length L of the string S is from 3 to 100.
                     0 <= N <= L 

Example Input/Output 1:

Input:  cricket 
        2
Output: etcrick 

Example Input/Output 2:

Input:  truth 
        5 
Output: truth

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[101];
    int n;
    scanf("%s\n %d", s, &n);
    int l=strlen(s);
    char s1[l + 1];
    
    strncpy(s1, s + l - n, n);
    strncpy(s1 + n, s, l - n);
    s1[l]='\0';
    
    printf("%s", s1);
}
