/*
The program must accept a string S as the input. The program must print the length of the longest substring containing vowels only as the output. 

Boundary Condition(s): 3 <= Length of String S <= 1000 

Input Format:  The first line contains the value of string S. 
Output Format: The first line contains the length of the longest sub-string containing vowels. 

Example Input/Output 1: 

Input:  abcaac 
Output: 2 

Explanation:  The length of the substring containing the vowel 'a' is 1. 
              But the length of the substring containing the vowels 'aa' is 2. 
              So the length of the longest substring is 2. 

Example Input/Output 2: 

Input:  eoolloooeklkee
Output: 4

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>
int vow(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        return 1;
    }
return 0;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    int l=strlen(s), m=0;
    for(int i=0; i<l; i++)
    {
        int c=0;
        if(vow(s[i])==1)
        {
            c+=1;
        }        
        for(int j=i + 1; j<l; j++)
        {
            if(vow(s[j])==1)
            {
                c++;
            }
            else if(vow(s[j])==0)
            {
                break;
            }
        }
        if(c>m)
        {
            m=c;
        }
    }
    printf("%d", m);
}
