#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    char ar[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d ",&ar[i][j]);
            (i!=0 && i!=(a-1) && j!=0 && j!=(b-1))?(sum+=ar[i][j]):0;
        }
    }
    printf("%d",sum);
}
