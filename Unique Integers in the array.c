/*
The program must accept an integer array of size N as the input. 
The program must print the unique integers in the array as the output. 
If there is no unique integer in the array, then the program must print -1 as the output. 

Boundary Condition(s): 3 <= N <= 100
                      -100 <= Each Integer <= 999

Example Input/Output 1: 

Input:  3 88 76 56 
Output: 88 76 56 

Example Input/Output 2: 

Input:   4 88 77 88 77 
Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
     int n;
     scanf("%d", &n);
     int arr[n], c=0;
     for(int i=0; i<n; i++) scanf("%d ", &arr[i]);
     for(int i=0; i<n; i++)
     {
         int f=0;
        for(int j=i + 1; j<n; j++)
        {
            if(arr[i]== arr[j] && arr[i]!=1000 && arr[j]!=1000)
            {
                arr[j]=1000;
                c=1;
                f=1;
            }
        }
        if(f==0)
        {
            if(arr[i]!=1000)
            {
                printf("%d ", arr[i]);
                c=0;
            }
        }
     }
     if(c==1) printf("-1");
     return 0;
}
