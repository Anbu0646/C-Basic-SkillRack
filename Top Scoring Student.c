#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, m, p, c, m1=0;
    scanf("%d", &n);
    char m2[101], m3[101]; 
    while(scanf("%[^:]:%d:%d:%d\n", &m2, &m, &p, &c)>0)
    {
        int s;
        s=m+p+c;
        if(s>m1)
        {
            m1=s;
            strcpy(m3, m2);
        }
    }
    printf("%s", m3);
}
