/*
Given N positive integers, find the minimum sum S that can be obtained by adding exactly M out of the N integers. The program must print the value of the minimum sum S.

Input Format:  The first line will contain N and M separated by a space.
               The second line will contain the values of N positive integers separated by a space.
Output Format: First line will contain S.

Boundary Conditions: 3 <= N <= 50
                     2 <= M <= N 

Example Input/Output 1:

Input:  5 2 
        9 2 1 5 4 
Output: 3

Explanation: Out of the five given numbers, the sum of 1+2 = 3 is the least sum and hence printed as the output.

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m, n, s=0;
    scanf("%d %d", &m, &n);
    int arr[m];
    
    for(int i=0; i<m; i++)
        scanf("%d ", &arr[i]);
        
    for(int i=0; i<m; i++)
    {
        for(int j=i + 1; j<m; j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    
    for(int i=0; i<n; i++)
        s+=arr[i];
    
    printf("%d", s);
}
