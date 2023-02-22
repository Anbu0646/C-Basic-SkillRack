/*
Define the function getCharacter which accepts a string S and an integer K as the input. 
The function must return the k th character when the reverse of the string S is repeated infinite number of times.

Input:  Skillrack
        13
Output: r

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

char Char(char s[], int k)
{
  int len = strlen(s), val = k%len;
  
  if (val == 0) 
    return s[0];
    
  if (k < len) 
    return s[len - k];
  
  return (s[len - val]);
}

int main()
{    
    char s[100];
    int k;
    scanf("%s\n %d", s, &k);
    printf("%c", Char(s,k));
    return 0;    
}
