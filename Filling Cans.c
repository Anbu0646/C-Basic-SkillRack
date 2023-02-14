/*


SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y, z, d, s=0;
    scanf("%d\n %d\n %d", &x, &y, &z);
    
    d=abs(x-y);
  
    if((z>x && z>y) || (z%2!=0 && x%2==0 && y%2==0) || (d<z))
    {
        printf("-1");
    }
    else
    {
        while(d>=z)
        {
            s+=1;
            x=abs(x - y);
            if(x==z)
            {
                break;
            }
        }
    printf("%d", s*2);
    }
}
