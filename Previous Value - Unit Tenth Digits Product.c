/*
7 
12 23 34 45 56 67 78
2 6 12 20 30
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d ", &a[i]);
        if(i>0)
            printf("%d ", (a[i-1]%10) * (a[i-1]/10%10) );
    }
}
