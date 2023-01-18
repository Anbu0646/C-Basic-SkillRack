/*
Ram likes palindromic words. He reads a word and wants to find the longest palindromic substring in the given word. 
The word is given as the input to the program. Help Ram by printing the length of the longest palindromic substring in the given word as the output. 

Boundary Condition(s): 1 <= Length of the word <= 1000 

Input Format:  The first line contains the word. 
Output Format: The first line contains the length of the longest palindromic substring. 

Example Input/Output 1: 

Input:  management 
Output: 3

Explanation: There are two palindromic substring values with length 3 in management.

Example Input/Output 2: 

Input:  triangle 
Output: 1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int l=strlen(s), c=0, m=1;
    for(int i=0; i<l; i++)
    {
        for(int j=i + 1; j<l; j++)
        {
            int c1=0;
            if(s[i]==s[j])
            {
                for(int k=i, l1=j; k<=j && l1>=i; k++, l1--)
                {
                    if(s[k]==s[l1])
                        c1++;
                }
                if(c1==(j - i) + 1)
                    c=c1;
            }
        }
        if(c>m)
        {
            m=c;
        }
    }
    printf("%d", m);
}
