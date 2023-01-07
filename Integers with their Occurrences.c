/*


SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], oc[101]={0};
    for(int i=0; i<n; i++)
    {
        scanf("%d ", &arr[i]);
        oc[arr[i]]++;
    }
    for(int i=100; i>=0; i--)
    {
        if(oc[i]!='\0')
        {
            printf("%d-%d\n", i, oc[i]);
        }
    }
}
