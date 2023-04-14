/*
The program must accept N positive integers as the input. 
The program must print two elements which are duplicated in the given array in descending order. 

Note: The array must contain atleast two repeating elements. 

Boundary conditions(s): 1 <= N <= 100 
                        1 <= Array Element Value <= 1000 

Example Input/Output 1: 
Input:  7 
        2 4 5 5 4 4 2 
Output: 5 4 

Example Input/Output 2: 

Input:  5 
        1 0 3 0 1 
Output: 1 0

SOLUTION:
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int arr[1001], n, i, j;
    int first = 0, second = 0;

    scanf("%d", &n);

    for (i=0; i<n; i++) 
    {
        scanf("%d ", &arr[i]);
    }

    for (i=0; i<n; i++) 
    {
        for (j=i + 1; j<n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                if (arr[i] > first) 
                {
                    second = first;
                    first  = arr[i];
                }
                else if (arr[i] > second && arr[i] != first) 
                {
                    second = arr[i];
                }
            }
        }
    }

    printf("%d %d", first, second);

    return 0;
}

/*

Aliter:

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], r[10001], k=0;
    for(int i=0; i<n; i++)  scanf("%d ", &arr[i]);
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j=i + 1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                if(c==0)
                {
                    r[k]=arr[i];
                    k++;
                    c=1;
                }
                else
                {
                    arr[j]='\0';
                }
            }
        }
    }
    for(int i=0; i<k; i++)
    {
        for(int j=i + 1; j<k; j++)
        {
            if(r[i]<r[j])
            {
                int t=r[i];
                r[i]=r[j];
                r[j]=t;
            }
        }
    }
    printf("%d %d", r[0], r[1]);
    return 0;
}
*/
