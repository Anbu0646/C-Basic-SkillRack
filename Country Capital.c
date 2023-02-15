/*
Input data containing N countries and their capital will be provided as input. The program must then print the capital for a given country.

Input Format:  First line will contain the integer value N representing how many country-capital pairs are to be provided as input. 
               Next N lines will contain the name of the country and the name of the captial as string values separated by a space. 
               The last line will contain the name of the country as a string value for which the capital is to be printed as output. 

Output Format: First line will contain the capital of the country. 
               If the name of the country is NOT found in the input data then NONE must be printed as output. 

Constraints: N will be from 2 to 100. 

Sample Input/Output: 

Example 1: 

Input:  5
        Afghanistan Kabul
        Austria Vienna 
        Armenia Yerevan
        Chile Santiago 
        Croatia Zagreb 
        Austria 

Output: Vienna 

Example 2: 

Input:  4
        Armenia Yerevan 
        Chile Santiago 
        Croatia Zagreb
        Iran Tehran 
        Japan

Output: NONE

Explanation: As Japan is not mentioned in the input data, NONE is printed as output.

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, j, f=0;
    scanf("%d\n", &n);
    char ctry[1001][1001], capt[1001][1001], ctryn[1001];
    
    for(int i=0; i<n; i++)
    {
        scanf("%s %s\n", ctry[i], capt[i]);
    }
    
    scanf("%s", ctryn);
    
    for(j=0; j<n; j++)
    {
        if(strcmp(ctry[j], ctryn)==0)
        {
            f=1;
            break;
        }
    }
    
    if(f==1)
        printf("%s", capt[j]);
    else
        printf("NONE");
    
}
