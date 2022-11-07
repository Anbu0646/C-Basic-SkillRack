/*


SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int isPrimeNo(int num)
{
    if(num <= 1)
        return 0;
    else
    {
        for(int start = 2; start < num; start++)
        {
            if(num%start == 0)
                return 0;
        }
        return 1;
    }
}

int main()
{
    char str[10001];
    scanf("%s", str);
    char frequency[257] = {0};
    
    for(int index = 0; str[index]; index++)
    {
        frequency[str[index]]++;
    }
    
    for(int index = 0; index < 256; index++)
    {
        if(frequency[index] != 0 && !(isPrimeNo(frequency[index])))
        {
            printf("NO");
            exit(0);
        }
    }
    printf("YES");
}
