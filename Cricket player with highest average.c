/*
The runs scored by two cricket players is passed as input. The program must print the total runs scored by the better player.
The better player is the player with a higher average. It is not necessary that both the players have played/scored in the same number of matches. 
If both the players have same average, then print the runs scored by the player who has the highest total runs.

Boundary Conditions: - The number of matches played for any player will not exceed 20. 
                     - If a negative value is passed as runs scored, then the program output must be INVALIDINPUT.

Input Format:  First line will contain the runs scored by player one.
               The scores are separated by one or more spaces. 
               Second line will contain the runs scored by player two. 
               The scores are separated by one or more spaces. 
Output Format: The first line will contain the total runs scored by the player having higher average. 

Sample Input/Output: 

Example 1: 

Input:  20 30 40 
        50 10 
Output: 90 

Explanation: Both the players have same average 30. Hence the output is the highest total runs which is by player 1. (20+30+40 = 90)

Example 2: 

Input:  50 60 10 
        50 40 
Output: 90 

Example 3: 

Input:  40 42 60
        0 100 56
Output: 156 

Example 4:

Input:  42 -10 
        22 45 
Output: INVALIDINPUT

Explanation: As -10 is passed as runs scored in the input, the program must print INVALIDINPUT

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r1[20], r2[20];
    char r3[201], r4[201];
    scanf("%[^\n]", r3);
    scanf("\n");
    scanf("%[^\n]", r4);
    int l3=strlen(r3), l4=strlen(r4), a=0, b=0, c=0, d=0, e=0, avg1, avg2;
    
    for(int i=0; i<=l3; i++)
    {
        if(r3[i]=='-')
        {
            printf("INVALIDINPUT");
            return;
        }
        else if(isdigit(r3[i]))
        {
            a=(a*10)+(r3[i] - '0');
        }
        else if(r3[i]==' '||r3[i]=='\0')
        {
            r1[b++]=a;
            a=0;
        }
    }
    
    for(int i=0; i<=l4; i++)
    {
        if(r4[i]=='-')
        {
            printf("INVALIDINPUT");
            return;
        }
        else if(isdigit(r4[i]))
        {
            a=(a*10)+(r4[i] - '0');
        }
        else if(r4[i]==' '||r4[i]=='\0')
        {
            r2[c++]=a;
            a=0;
        }
    }
    
    for(int i=0; i<b; i++)
    {
        if(r1[i]>=0)
        {
            d+=r1[i];
        }
    }
    
    for(int j=0; j<c; j++)
    {
        if(r2[j]>=0)
        {
            e+=r2[j];
        }
    }
    
    avg1=d/b; avg2=e/c;
    
    if(avg1>avg2)
    {
        printf("%d", d);
    }
    else if(avg1==avg2)
    {
        printf("%d", (d>e)?d:e);
    }
    else
    {
        printf("%d", e);
    }
}
