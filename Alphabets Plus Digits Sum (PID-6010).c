
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001];
    scanf("%s",s);
    int sum=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(isdigit(s[i]))
        {
            sum+=(int)s[i]-48;
        }
    }
    for(int i=0;i<strlen(s);i++)
    {
        if(isalpha(s[i]))
        {
            if(sum>26)sum=sum%26;
            int t=tolower(s[i])+sum;
            if(t>122)
                printf("%c",t-26);
            else
                printf("%c",t);
        }
    }
}
