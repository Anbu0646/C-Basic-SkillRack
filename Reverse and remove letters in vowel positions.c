/*
Sharon does not like vowels. So she wants to remove vowels from any string. But her friend Jennie loves vowels and wants to retain vowels in as string.
So both discuss and agree to the following condition. 
- They will reverse the string value and then remove the letters in the positions of the vowels in the original string. 

Help them by writing the program implementing the above condition. 

Input Format:  First line will contain the string value S. 
Output Format: First line will contain the reversed string value with the letters in the positions of vowels in the original string removed. 

Constraints: Length of String S is from 2 to 50. 

Sample Input/Output: 

Example 1: 

Input:  environment 
Output: nenrine 

Explanation: The reversed string value is tnemnorivne. 
             The vowels position in the original string are e-1 i-4 o-6 e-9 
             Hence after removing the letters in the positions 1,4,6,9 the string is nenrine 

Example 2: 

Input:  pond 
Output: dop 

Explanation: The reversed string value is dnop. 
             The vowels position in the original string are o-2
             Hence after removing the letters in the positions 2 the string is dop

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int isvow(char a)
{
    a=tolower(a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        return 1;
    return 0;
}

int main()
{
    char s[101];
    scanf("%s", s);
    int l=strlen(s), sc[101], c=0, f=0;
    
    for(int i=0; i<l; i++)
    {
        if(isvow(s[i]))
        {
            sc[c++]=i;
        }
    }
    
    for(int i=0, j=l - 1; i<j; i++, j--)
    {
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    
    for(int i=0; i<l; i++)
    {
        f=0;
        for(int j=0; j<c; j++)
        {
            if(sc[j]==i)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%c", s[i]);
        }
    }
}
