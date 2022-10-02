/*
  Input:
    adsdfls93df9_ 39542kd
  Output:
    adsdflsdfkd
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[1000];
    scanf("%[^\n]",&a);
    for(int i=0;a[i]!='\0';i++){
        (tolower(a[i])>=97 && tolower(a[i])<=122)?printf("%c",a[i]):0;
    }
}
