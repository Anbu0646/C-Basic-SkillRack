/*
The program must accept a string S as the input. The program must remove all the occurrences of the articles a, an and the in the string S. 
Finally, the program must print the modified string as the output. If all the words in the string S are articles then the program must print -1 as the output. 

Note: String values are only in lower case. 

Hint: Use strcmp() function 

Boundary Condition(s): 1 <= Length of S <= 1000 

Example Input/Output 1: 

Input:  sometimes an adjective comes between the article and noun 
Output: sometimes adjective comes between article and noun 

Example Input/Output 2: 

Input: a an the an
Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[101][101];
    int i=0, f=0;
    
    while(scanf("%s ", str[i])>0)
    {
        i++;
    }
    
    char art1[2]="a", art2[3]="an", art3[4]="the";
    
    for(int j=0; j<i; j++)
    {
        if(strcmp(str[j], art1)==0 || strcmp(str[j], art2)==0 || strcmp(str[j], art3)==0)
        {
            continue;
            f=1;
        }
        else
        {
            printf("%s ", str[j]);
            f=1;
        }
    }
    
    if(f==0)
    {
        printf("-1");
    }
}
