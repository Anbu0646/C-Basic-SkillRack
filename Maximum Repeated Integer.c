/*
The program must accept an array of positive integers of size N as the input. The program must print the maximum repeated integer in the array as the output. 
If none of the integer is repeated, then print -1 as the output. 

Note: There is only one maximum repeated integer in the array. 

Boundary Condition(s): 2 <= N <= 50 
                       1 <= Each Integer <= 99 

Example Input/Output 1: 

Input:  5 
        2 3 3 2 2
Output: 2 

Example Input/Output 2: 

Input:   3 
         12 34 56 
Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, f=0, mx=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)  scanf("%d ", &arr[i]);
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j=i + 1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {    
                c+=1;
                if(c>mx)
                    mx=arr[i];
            f=1;
            }
        }
    }
    printf("%d", (f==1)?mx:-1);
}
