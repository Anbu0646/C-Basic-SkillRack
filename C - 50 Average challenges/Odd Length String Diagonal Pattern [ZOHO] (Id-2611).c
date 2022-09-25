/*
An odd length string S of length L is passed as the input. The program must print the string S as two diagonals as shown in the example Input/Output below. 

Input Format: The first line will contain S.
Output Format: L lines will contain the pattern as shown in the example Input/Output below. 

Boundary Conditions: Length of S is from 3 to 51. 

Example Input/Output 1: 

Input:  cry 
Output: c y 
         r 
        c y 


Solution:
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1000];
    scanf("%s", s);
    int l=strlen(s);
    for(int i=0; i<l; i++, printf("\n")){
        int t = l - i - 1;
        for(int j=0; j<l; j++){
            if(i==j)
                printf("%c", s[j]);
            else if(j==t)
                printf("%c", s[j]);
            else
                printf(" ");
        }
    }
}
