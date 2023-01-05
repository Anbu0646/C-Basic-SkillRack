/*
The program must accept N integers as the input. The program print the product of the integers which are present between two negative integers as the output. 

Note: Atleast two negative integers will be present. 

Boundary Condition(s):  1 <= N <= 10^5 

Input Format:  The first line contains the integer N. The second line contains N integers separated by space(s). 
Output Format: The first line contains the product of the integers which are present between two negative integers. 

Example Input/Output 1: 

Input:  9 
        10 -12 3 4 2 -24 5 3 -15 
Output: 24 15 

Explanation:  The first two negative elements are -12 and -24. 
              The elements between -12 and -24 are 3, 4 and 2 and their product is 24. So 24 is printed. 
              Then the next two negative elements are -24 and -15. 
              The elements between -24 and -15 are 5 and 3 and their product is 15. So 15 is printed. 

Example Input/Output 2: 

Input:  8 
       -10 20 3 -45 10 20 22 -4 
Output: 60 4400

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, v=-1;
    scanf("%d", &n);
    int arr[n];
    long long int z=0, p=1;
    for(int i=0; i<n; i++)  scanf("%d ", &arr[i]);
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0 && v!=-1)
        {
            if(p==1 && arr[i - 1]!=1)   printf("%lld ", z);
            else if(p==1 && arr[i - 1]==1)   printf("%lld ", p);
            else    printf("%lld ", p);
        p=1;
        v=i;
        continue;
        }
        if(arr[i]<0 && v==-1)
        {
            v=i;
            continue;
        }
        if(v!=-1)   
        {
            p*=arr[i];
        }
    }
    return 0;
}
