/*
  This Program will print the count of number of unit matrix in the given matrix
  
  Input:
    1 0 1 1
    1 1 1 1
    1 1 0 0
  
  Output:
    2
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,count=0;
    scanf("%d",&a);
    char ar[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-1;j++){
            if(ar[i][j]==1 && ar[i][j+1]==1 && ar[i+1][j]==1 && ar[i+1][j+1]==1){
                count++;
            }
        }
    }
    printf("%d",count);
}
