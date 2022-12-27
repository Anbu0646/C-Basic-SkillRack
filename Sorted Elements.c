/*
The program must accept N integers as the input.
The program must print the integers in the following order smallest integer, largest integer, second smallest integer, second largest integer and so on.

Boundary Condition(s): 2 <= N <= 100

Example Input/Output 1:

Input:  6 
        10 12 8 9 11 5
Output: 5 12 8 11 9 10

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i=0; i<n; i++)
        scanf("%d ", &arr[i]);
    for(i=0; i<n; i++)
    {
        for(j=i + 1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(i=0, j=n - 1; i<j; i++, j--)
        printf("%d %d ", arr[i], arr[j]);
    if(i==j)
        printf("%d ", arr[i]);
}
