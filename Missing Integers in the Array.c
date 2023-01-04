/*
The program must accept an integer array of size N as the input. The program must find the minimum and the maximum integers in the array as X and Y. 
Then the program must print all the integers from X to Y which are not present in the given array. 
If all the integers are present in the array then the program must print -1 as the output. 

Boundary Condition(s): 1 <= N <= 100 
                       1 <= Array Element Value <= 1000 
                                    
Example Input/Output 1: 

Input:  5 6 4 2 7 4 
Output: 3 5 

Explanation:  The minimum integer from the array is 2. 
              The maximum integer from the array is 7. 
              The integers between 2 to 7 are 3 4 5 and 6. 
              Here 4 and 6 are present in the array. 
              The integers 3 and 5 are not present in the array. 
              Hence the output is 3 5 
              
Example Input/Output 2: 

Input:  8 1 2 2 2 8 9 9 10 
Output: 3 4 5 6 7 

Example Input/Output 3: 

Input:  4 8 5 7 6 
Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d ", &arr[i]);
    for(int i=0; i<n; i++)
    {
        for(int j=i + 1; j<n; j++)
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
    {
        for(int j=i + 1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j; k<n; k++)
                {
                    arr[k]=arr[k + 1];
                }
            n--;
            }
        }
    }
    int min=arr[0], max=arr[n - 1], c=0;
    for(int i=min + 1; i<max; i++)
    {
        int f=0;
        for(int j=0; j<n; j++)
        {
            if(i==arr[j])
                f=1;
        }
        if(f==0)
        {
            printf("%d ", i);
            c=1;
        }
    }
    if(c==0) printf("-1");
}
