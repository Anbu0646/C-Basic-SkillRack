/*
The program must accept an integer array of size N as the input. The program must print the integers that are occurring odd number of times in the array as the output.
If there is no integer occurring odd number of times, then the program must print -1 as the output. 

Boundary Condition(s): 3 <= N <= 100 
                       1 <= Each integer < 100 
                       
Example Input/Output 1: 

Input:  5  
        2 3 3 4 5 
Output: 2 4 5 

Example Input/Output 2: 

Input:   4 
         21 11 21 11 
Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], orr[1001]={0}, f=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d ", &arr[i]);
        orr[arr[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i + 1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=-1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=-1)
        {
            if(orr[arr[i]]%2!=0)
            {
                printf("%d ", arr[i]);
                f=1;
            }
        }
    }
    if(f==0)    printf("-1");
    return 0;
}
