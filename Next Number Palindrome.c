/*

INPUT 1:
909

OUTPUT 1:
919

INPUT 2:
121

OUTPUT 2:
131

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, t, s;
    scanf("%d", &n);
    n+=1;
    
    while(1)
    {
        n++;
        t=n; 
        s=0;
        
        while(t>0)
        {
            s=(s*10)+(t%10);
            t/=10;
        }
        
        if(n==s)
        {
            printf("%d", n);
            break;
        }
    }
}
