/*
Two string values S1 and S2 are passed as the input. The program must concatenate them depending on which string comes first in the alphabetical order. 

Input Format:  The first line will contain S1. 
               The second line will contain S2 
Output Format: The first line will contain the concatenated string value.

Boundary Conditions: Length of S1 and S2 is from 3 to 100. 

Example Input/Output 1:

Input:  apple 
        orange 
Output: appleorange 

Example Input/Output 2: 

Input:  zoo
        tiger
Output: tigerzoo

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s1[101], s2[101];
    scanf("%s\n %s", s1, s2);
    if(s1[0]>s2[0])
        printf("%s%s", s2, s1);
    else
        printf("%s%s", s1, s2);
}
