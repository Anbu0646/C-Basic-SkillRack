/*
The program must accept a string S as the input. The program must print the count of characters that are not repeated in the string S as the output. 

Boundary Condition(s): 1 <= Length of S <= 1000 

Input Format:  The first line contains S.
Output Format: The first line contains the count of characters that are not repeated in the string S.

Example Input/Output 1: 

Input:  skillrack 
Output: 5 

Explanation:  The non-repeated characters in the given string are s, i, r, a and c. So their count 5 is printed as the output. 

Example Input/Output 2: 

Input:  Aabac#1123 
Output: 6 

Explanation: The non-repeated characters in the given string are A, b, c, #, 2 and 3. So their count 6 is printed as the output.

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int arr[100001]={0}, l=strlen(s), c=0;
    for(int i=0; i<l; i++)
        arr[s[i]]++;
    for(int i=0; i<l; i++)
    {
        (arr[s[i]]==1)?(c+=1):0;
    }
    printf("%d", c++);
}
