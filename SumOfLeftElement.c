/*
  Input:
    5
    2 4 6 8 10
    
  Output:
    0 2 6 12 20
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,sum=0,flag=0;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&ar[i]);
        (i>0)?(sum+=ar[i-1],printf("%d ",sum)):printf("%d ",sum);
    }

}
