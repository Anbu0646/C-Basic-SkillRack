/*
An array of N integers with non-zero values is passed as the input to the program. The program must print another array of size N where value at each index will be the product of all values in the input array except the value at that index in the input array. 

Input Format:  The first line will contain N integers separated by a space. 
Output Format: The first line will contain N integers separated by a space. 

Boundary Conditions: The length of the input containing N integers will be from 3 to 100. 
		     The integer values will be from 1 to 100. 

Example Input/Output 1: 

Input:  1 2 3 4 5 
Output: 120 60 40 30 24 

Example Input/Output 2: 

Input:  10 5 4 
Output: 20 40 50 

Example Input/Output 3: 

Input:  21 100 
Output: 100 21


Solution:
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, a[100], b[100], c=1, d=0, i=0, j=0;
    while(scanf("%d", &n)==1)
    {
        c*=n;
        a[i]=n;
        i++;
    }
    for(; j<i; j++)
    {
        b[d] = c / a[j];
        printf("%d ", b[d]);
        d++;
    }
}
