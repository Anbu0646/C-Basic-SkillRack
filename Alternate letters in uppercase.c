/*
A String S(only alphabets) is passed as input. The printed output should contain alphabets in odd positions in each word in uppercase and alphabets in even positions in each word in lowercase. 

Input format: 
The first line will contain s. 

Output format: 
The first line will contain the resultant string value based on the conditions provided. 
Boundary conditions: length of s is from 3 to 100. 

Example input/output 1: 
Input: 
tREE GiVES us fruiTS

Output: 
TrEe GiVeS Us FrUiTs

Example input/output 2: 
Input: 
FLoweR iS beauTIFUL

Output: 
FlOwEr Is BeAuTiFuL

Solution:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char s[1000], c=0;
    scanf("%[^\n]", s);

    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]==' ')
        {
            printf("%c", s[i]);
            c=0;
        }
        if(c%2!=0 && isalpha(s[i]))
        {
            printf("%c", tolower(s[i]));
            c++;
        }
        else if(c%2==0 && isalpha(s[i]))
        {
            printf("%c", toupper(s[i]));
            c++;
        }
    }

    return 0;
}
