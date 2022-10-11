#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int x, y, x1, y1;
    scanf("%lld %lld", &x, &y);
    x1=x%10; y1=y%10;
    printf("%lld %lld", x-x1+y1, y-y1+x1);
}
