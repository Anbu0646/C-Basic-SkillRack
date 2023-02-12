/*
A string S (with only LOWER case alphabets and length from 3 to 100) will be passed as input. The program should print the alphabets in the string in descending order.

Input Format:  The first line will contain S. 
Output Format: The first line will contain the alphabets present in S in descending order.

Example Input/Output 1:

Input:  cake 
Output: keca 

Example Input/Output 2: 

Input:  innovation
Output: vtonia

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[101];
    scanf("%s", s);
    int l=strlen(s), s1[26]={0};
  
    for(int i=0; i<l; i++)
    {
        s1[s[i]-97]=1;
    }
  
    for(int j=25; j>=0; j--)
    {
        if(s1[j]==1)
        {
            printf("%c", (char)j+97);
        }
    }
}
