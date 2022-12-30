/*
Input:  5
Output: - - - - * * * * * 
        - - - * 1 2 3 * 
        - - * 4 5 6 * 
        - * 7 8 9 * 
        * * * * *

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n, x=1;
  scanf("%d", &n);
  for(int i=1; i<=n; i++)
  {
    for(int j=i; j<n; j++) printf("- ");
    for(int k=1;k<=n;k++)
    {
        if(i==1||i==n||k==1||k==n) printf("* ");
        else
        {
            printf("%d ", x);
            x++;
        }
    }
    printf("\n");
   }
}
