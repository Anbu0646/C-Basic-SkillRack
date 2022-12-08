/**/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001], s1[1001];
    float d;
    int m=1000;
    while(scanf("%[^@]@%f", s, &d)>0)
    {
        if(d<m)
        {
            m=d;
            strcpy(s1, s);
        }
    }
    printf("%s", s1);
}
