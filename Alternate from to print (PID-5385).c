/*
INPUT:
6
4 5 6 7 8 9

OUTPUT:
4 5 6 5 6 7 8 7 8 9 
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,i,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
    if(i%2==0)
    {
    for(j=a[i];j<=a[i+1];j++)
    {
        printf("%d ",j);
    }
    }
    else
    {
        for(j=a[i+1];j>=a[i];j--)
        {
            printf("%d ",j);
        }
    }
}

}
