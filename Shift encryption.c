/*
Anmol wants to encrypt the message M which is to be sent to his business partner Binamol.
So he shifts every alphabet by X positions in forward direction and he adds Y to every number in the message.
Given a string value M of the message and the values of X and Y, the program must print the encrypted message E.
- All the alphabets will be in lower case. 
- Spaces and special characters in the message M should be reproduced as such in the encrypted message E.

Input Format:  First line will contain the string value M Second line will contain the integer value of X Third line will contain the integer value of Y
Output Format: First line will contain the string value of the encrypted message E. 

Constraints: Length of M is from 2 to 100. 0 <= X <= 10, 0 <= Y <= 9 

Sample Input/Output: 

Example 1: 

Input:  call me at 10 p.m 
        2 
        1
Output: ecnn og cv 21 r.o

Example 2: 

Input:  credit 1 lakh 
        3 
        0 
Output: fuhglw 1 odnk

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[101];
    int x, y, k=0;
    
    scanf("%[^\n]", s);
    scanf("%d\n%d", &x, &y);
    
    k=strlen(s);
    
    for(int i=0; i<k; i++)
    {
        if(isalpha(s[i]))
        {
            if(s[i]>'z')
            {
                int h = x-('z' - s[i]) - 1;
                printf("%c", 'a'+h);
            }
            else
            {
                printf("%c", s[i]+x);
            }
        }
        else if(isdigit(s[i]))
        {
            int d=s[i]-'0';
            printf("%d", (d+y));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}
