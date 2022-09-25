/*
A string S is passed as the input. S has at least one repeating character. The program must print the first repeating character C.

Input Format: The first line contains S.

Output Format: The first line contains C.

Boundary Conditions: Length of S will be from 3 to 100.

Example Input/Output 1: Input: abcdexyzbwqpoolj

Output:

b

Solution:
*/

#include<stdio.h> 
#include<stdlib.h>

int main()
{
	char s[101], c='f'; 
	scanf("%[^\n]", s); 
	int l=strlen(s);
	for(int i=0; i<=l - 1; i++)
	{ 
		for(int j=i + 1; j<=l; j++)

		{

			if(s[i]==s[j])

			{
				printf("%c", s[j]); 
				c='a'; 
				return;
			}	

		if(c=='a')
			break;

		}

	}

}
