/*

Accept a list of M and N integers as the input. The program must print the common unique integers between the two lists M and N in the order given in M. If there is no common unique integer then the program must print "Invalid" as the output.

Solution:

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,arr[100],barr[100],i,j,k=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<m;j++){
        scanf("%d",&barr[j]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==-1){
            continue;
        }
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==-1){
            continue;
        }
        for(j=0;j<m;j++){
            if(arr[i]==barr[j]){
                printf("%d ",arr[i]);
                k=1;
                barr[j]=-1;
                break;
            }
        }
    }
    if(k==0){
        printf("Invalid");
    }
}
