/*
Given a set of numbers where all other numbers are multiple of the smallest number, the program must find the count of the common factors C excluding 1. 

Input Format:  First line will contain the integer value N representing how many numbers are passed as input. 
               Next N lines will have the numbers. 
Output Format: First line will contain the count of common factors C. 

Constraints: N will be from 2 to 20. 

Sample Input/Output:

Example 1: 

Input:  2 
        100 
        75 
Output: 2

Explanation: The common factors excluding 1 are 5,25. Hence output is 2

Example 2: 

Input:  3 
        10 
        20 
        30
Output: 3 

Explanation:  The common factors excluding 1 are 2,5,10. Hence output is 3.

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define min(a, b) ((a<b)?a:b)

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    
    for(int i=0; i<n/2; i++)
    {
        int st=min(arr[i], arr[n - i - 1]);
        
        for(int j=st; j>=1; j--)
        {
            if(arr[i]%j==0 && arr[n - i - 1]%j==0)
            {
                printf("%d", j);
                break;
            }
        }
    }
    
    if(n%2!=0)
    {
        printf("%d", arr[n/2]);
    }
}
