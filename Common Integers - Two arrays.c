/*
The program must accept two positive integer arrays of size N1 and N2. 
The program must print the common elements in both the arrays in the ascending order as the output. 
If both the arrays have no common elements then the program must print -1 as the output. 

Boundary Condition(s): 1 <= N1, N2 <= 50 
                       0 <= Array Element Value <= 1000 
                       
Example Input/Output 1: 

Input:  5 7 
        1 2 4 8 0 
        10 23 2 8 10 0 1 
Output: 0 1 2 8 

Example Input/Output 2: 

Input:   6 4 
         4 1 9 2 16 2
         0 5 10 15   
Output: -1


SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, n1;
    scanf("%d %d", &n, &n1);
    int arr[n], brr[n1], vrr[10000], k=0, f=0;
    for(int i=0; i<n; i++)  scanf("%d ", &arr[i]);
    for(int i=0; i<n1; i++) scanf("%d ", &brr[i]);
    for(int i=0; i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                a[i]=-1;
            }
        }
    }
    for(int i=0; i<n1; i++)
    {
        for(int j=i+1; j<n1; j++)
        {
            if(brr[i]==brr[j])
            {
                brr[j]=-1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n1; j++)
        {
            if(arr[i]==brr[j] && arr[i]!=-1 && brr[j]!=-1)
            {
                vrr[k]=arr[i];
                k++;
                f=1;
            }
        }
    }
    if(f==1)
    {
        for(int i=0; i<k; i++)
        {
            for(int j=i + 1; j<k; j++)
            {
                if(vrr[i]>vrr[j])
                {
                    int t=vrr[i];
                    vrr[i]=vrr[j];
                    vrr[j]=t;
                }
            }
        }
        for(int i=0; i<k; i++)
            printf("%d ", vrr[i]);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
