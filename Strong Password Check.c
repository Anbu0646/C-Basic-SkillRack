/*
Recently a security committee decided to enforce the following rules when an employee creates/changes his/her password. 

- The password must contain atleast one special character among # ! _ $ @ 
- The password must contain atleast two numbers
- The password must contain atleast one upper case alphabet and one lower case alphabet.
- The password must have a minimum length of 8.
- The password must have a maximum length of 25. 

The program must accept a given password string P as input and check for these rules and output VALID or INVALID.

Boundary Conditions: Length of P is from 2 to 50. 

Input Format:  First line will contain the string value of the password P 
Output Format: VALID or INVALID based on the check performed by the program by applying the rules.

Example Input/Output: 

Example 1:  
Input:  kiC_3b0x3r 
Output: VALID 

Example 2:

Input:  m@d31nindia 
Output: INVALID 

Explanation: No alphabet in uppercase. 

Example 3: 

Input:  M1kT!s0
Output: INVALID 

Explanation: Minimum length must be 8

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[51];
    int d=0, U=0, L=0, sp=0, l=0;
    scanf("%s", s);
    l=strlen(s);
    
    for(int i=0; i<l; i++)
    {
        if(isdigit(s[i]))
            d+=1;
        if(islower(s[i]))
            L+=1;
        if(isupper(s[i]))
            U+=1;
        if(ispunct(s[i]))
            sp+=1;
    }
    
    if(d>=2 && L>=1 && U>=1 && sp>=1 && (l>=8 && l<=25))
        printf("VALID");
    else
        printf("INVALID");
}
