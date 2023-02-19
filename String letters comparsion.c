/*
Two string values S1 and S2 are passed as input. The program must check if both S1 and S2 contain the same unique set of letters and print YES or NO.
Assume all the letters (alphabets) are in smaller case. 

Boundary Conditions: Length of S1 is from 2 to 100 Length of S2 is from 2 to 100 

Input Format:  First line will contain the string value of S1 Second line will contain the string value of S2 
Output Format: YES or NO depending on if both S1 and S2 contain the same set of unique letters. 

IMPORTANT: Please note that the output is CASE SENSITIVE. Hence print YES or NO (instead of yes or no)

Sample Input/Output: 

Example 1: 

Input:  read 
        dear 
Output: YES

Explanation: Both S1 and S2 are formed using the letters - a d e r 

Example 2:
Input:  record 
        decoder
Output: YES 

Explanation: Both S1 and S2 are formed using the letters - c d e o r 

Example 3: 

Input:  energy 
        synergy 
Output: NO 

Explanation: S2 has additional letter - s in it.

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[101], s1[101];
    scanf("%s\n %s", s, s1);
    int l=strlen(s), l1=strlen(s1), c=0;
    
    for(int i=0; i<l; i++)
    {
        if(s[i]==s[i + 1])
        {
            s[i + 1]='\0';
        }
    }
    
    for(int i=0; i<l1; i++)
    {
        if(s1[i]==s1[i + 1])
        {
            s1[i + 1]='\0';
        }
    }
    
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<l1; j++)
        {
            if(s[i]==s1[j])
            {
                c+=1;
            }
        }
    }
    
    printf("%s", (c==l || c== l1)?"YES":"NO");
}
