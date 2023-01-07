/*

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], brr[n], a=0, b=0, t=0;
    for(int i=0; i<n; i++)  scanf("%d ", &arr[i]);
    for(int j=0; j<n; j++)  scanf("%d ", &brr[i]);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]>brr[j])
                a+=1;
            else if(arr[i]==brr[j])
                t+=1;
            else
                b+=1;
        }
    }
    if(a>b) printf("Team A %d %d %d", a, b, t);
    else    printf("Team B %d %d %d", b, a, t);
}
