/*
The program must accept an array of positive integers of size N as the input. The program must print Valid if the integers in the array is a non-decreasing sequence. Else the program must print Invalid as the output. 

Boundary Condition(s): 3 <= N <= 50 
                       1 <= Each Integer <= 99 
                       
Example Input/Output 1: 

Input:  5 
        4 5 3 1 2 
Output: Valid 

Example Input/Output 2: 

Input:  4 
        8 7 3 1 
Output: Invalid

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, d=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d ", &arr[i]);
    for(int i=1; i<=n; i++)
    {
        if(arr[i]>=arr[i + 1]) d++;
    }
    if(d==n - 1) printf("Invalid");
    else printf("Valid");
    return 0;
}
