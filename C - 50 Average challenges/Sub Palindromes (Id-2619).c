/*
Given a string s, the program must print the count of sub palindromes (with a minimum length of two characters) in the string s. 

Boundary conditions: length of the string is between 2 and 200. 

Input format:  First line will contain the string value s. 
Output format: First line will contain the integer which represents the count of sub palindromes in the string s. 

Sample input/output: 

Example 1: 

Input:  everest 
Output: 2 

Explanation: the sub palindromes are eve, ere 

Example 2: 

Input:  abccbaab 
Output: 5 

Explanation: the sub palindromes are cc, bccb, aa, baab, abccba


Solution:
*/
#include<stdio.h>
#include<stdlib.h>

int pal(char s[], int i, int j)
{
    int c=0;
    for(int k=0; k < ( (j - i)/2) + 1 && i + k < j - k; k++)
    {
        if(s[i + k]==s[j - k])
            c++;
        else
            return 0;
    }
    return 1;
}

int main()
{
    char s[201];
    int i, j, l, c=0;
    scanf("%s", &s);
    l=strlen(s); j = l - 1;
    for(i=0; i< l - 1; i++)
    {
        j = l - 1;
        while(j > i)
        {
            if(pal(s, i, j))
                c++;
        j--;
        }
    }
    printf("%d", c);
}
