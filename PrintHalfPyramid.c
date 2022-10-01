/* half pyramid using one loop
	Input: 
		5
	Output:
		*
		* *
		* * *
		* * * *
		* * * * *	
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,i=1,j=1;
    scanf("%d",&a);
    while(i<=a){
        printf("* ");
        (j==i)?(i++,j=1,printf("\n")):j++;
    }
}
