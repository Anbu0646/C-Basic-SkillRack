/*
Two string values S1 and S2 are passed as input. The last portion of S1 will be the first portion of S2. The program must print this common part in S1 and S2.

Input Format:  The first line contains S1.
               The second line contains S2.
Output Format: The first line contains the common part.

Boundary Conditions: Length of S1 and S2 will be from 3 to 100.

Example Input/Output 1:

Input:  mayday
        daybreak
Output: day

Example Input/Output 2:

Input:  bridge
        gear
Output: ge

SOLUTION:
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s1[101], s2[101];
    scanf("%s\n%s", &s1, &s2);
    int a[256]={0}, f=1, f1=0;
  
    for(int i=0; i<strlen(s1); i++)
        a[s1[i]]++;
  
    for(int i=0; i<strlen(s2); i++)
    {
        if(a[s2[i]]!=0 && f==1)
        {
            printf("%c", s2[i]);
            a[s2[i]]--;
            f1=1;
        }
        if(f1==1)
           f=0;
    }
    return 0;
}
