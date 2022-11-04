/*
Print the Smallest Numerator and Largest Denominator of the given fractional numbers.

INPUT:  5
        1/5 2/5 3/8 9/7 10/1
OUTPUT: 1 8

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, max=0, min=99999;
    scanf("%d", &n);
    int a[n], b[n];
  
    for(i=0; i<n; i++)
      scanf("%d/%d", &a[i], &b[i]);
  
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
          min=a[i];
        if(b[i]>max)
          max=b[i];
    }
    printf("%d %d", min, max);
}
