/*
A string S is passed as the input. Two words W1 and W2 which are present in the string S are also passed as the input. The program must find the minimum distance D between W1 and W2 in S (in forward or reverse order) and print D as the output. 

Input Format:  The first line will contain S. 
               The second line will contain W1. 
               The third line will contain W2. 
Output Format: The first line will contain D - the minimum distance between W1 and W2 in S. 

Boundary Conditions: Length of S is from 5 to 200. 

Example Input/Output 1: 

Input:  the brown quick frog quick the the quick 
Output: 1 

Explanation: quick and the are adjacent as the last two words. Hence distance between them is 1. 

Example Input/Output 2: 

Input:  the quick the brown quick brown the frog quick frog 
Output: 3


Solution:
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[51][51], w[21], x[21], l=0, a=0, sh=100;
    int i=0, j[51], k[51];
    while(scanf("%s", s[i])>0) i++;
    strcpy(w, s[i - 2]); strcpy(x, s[i - 1]);
    i-=2;
    for(int h=0; h<i; h++)
    {
        if(strcmp(s[h], w)==0){
            j[l]=h; l++;
        }
        else if(strcmp(s[h], x)==0){
            k[a]=h; a++;
        }
    }
    if(a==0)
        printf("%d", l - 2);
    else{
        for(int h=0; h<l; h++)
        {
            for(int g=0; g<a; g++)
            {
                signed int d;
                d = j[h] - k[g];
                if(d<0)
                    d=0 - d;
                if(d<sh)
                    sh=d;
            }
        }
    printf("%d", sh);
    }
}
